/*
 * XREFs of MmCreateSpecialImageSection @ 0x140AE8400
 * Callers:
 *     PspLocateSystemDll @ 0x140772090 (PspLocateSystemDll.c)
 *     NtCreateUserProcess @ 0x140AC9930 (NtCreateUserProcess.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x14030CBE0 (PsGetSessionIdEx.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     MiSectionControlArea @ 0x140355A80 (MiSectionControlArea.c)
 *     MiReferenceControlAreaFile @ 0x14041CAA0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x14041F2B0 (MiDereferenceControlAreaFile.c)
 *     CcZeroEndOfLastPage @ 0x140443674 (CcZeroEndOfLastPage.c)
 *     Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline @ 0x1405E2D38 (Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     MiCreateSection @ 0x14098B3C0 (MiCreateSection.c)
 */

__int64 __fastcall MmCreateSpecialImageSection(__int64 *a1, int a2, __int64 a3, char a4, __int64 a5, char a6)
{
  int v10; // edi
  int v11; // ebx
  int SessionId; // esi
  __int64 result; // rax
  unsigned __int64 v14; // rdi
  struct _FILE_OBJECT *v15; // rbx
  PVOID Object; // [rsp+70h] [rbp-38h] BYREF
  __int64 v17; // [rsp+78h] [rbp-30h] BYREF

  v17 = 0LL;
  Object = 0LL;
  v10 = (a6 & 1) != 0 ? 0x1000000 : 37748736;
  v11 = a6 & 1 | 8;
  if ( (a6 & 4) == 0 )
    v11 = a6 & 1;
  if ( (unsigned int)Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline() && (a6 & 8) != 0 )
    v11 |= 0x20u;
  SessionId = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  for ( result = MiCreateSection(&Object, a2, 0, 16, v10, v11, a3, a4, a5, 0LL, 0, SessionId, 0LL);
        (int)result < 0;
        result = MiCreateSection(&Object, a2, 0, 16, v10, v11, a3, a4, a5, 0LL, 0, SessionId, 0LL) )
  {
    if ( (_DWORD)result != -1073741740 )
      return result;
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
  }
  v14 = MiSectionControlArea((__int64)Object);
  v15 = (struct _FILE_OBJECT *)MiReferenceControlAreaFile(v14);
  CcZeroEndOfLastPage(v15);
  MiDereferenceControlAreaFile(v14, (signed __int64)v15);
  result = ObInsertObjectEx((struct _FILE_OBJECT *)Object, 0LL, 983071, 0, 0, 0LL, (__int64)&v17);
  if ( (int)result >= 0 )
    *a1 = v17;
  return result;
}
