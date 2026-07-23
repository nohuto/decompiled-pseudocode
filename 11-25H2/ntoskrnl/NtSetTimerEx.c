/*
 * XREFs of NtSetTimerEx @ 0x1402EB680
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExpSetTimerObject @ 0x1402EB930 (ExpSetTimerObject.c)
 *     ExpSetTimerObject2 @ 0x140370C68 (ExpSetTimerObject2.c)
 *     PoCaptureReasonContext @ 0x140425AF8 (PoCaptureReasonContext.c)
 *     PoDestroyReasonContext @ 0x1404E90C0 (PoDestroyReasonContext.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtSetTimerEx(
        HANDLE TimerHandle,
        TIMER_SET_INFORMATION_CLASS TimerSetInformationClass,
        PVOID TimerSetInformation,
        ULONG TimerSetInformationLength)
{
  __int128 *v4; // rbx
  unsigned __int8 PreviousMode; // si
  __int64 v7; // rcx
  __int64 v8; // r14
  int v9; // r13d
  __int64 v10; // r15
  __int64 v11; // r12
  int v12; // edi
  struct _OBJECT_TYPE *v13; // rax
  int v14; // eax
  NTSTATUS result; // eax
  char v16[4]; // [rsp+50h] [rbp-68h] BYREF
  int v17; // [rsp+54h] [rbp-64h]
  PVOID P; // [rsp+58h] [rbp-60h] BYREF
  PVOID Object; // [rsp+60h] [rbp-58h] BYREF
  __int128 v20; // [rsp+68h] [rbp-50h] BYREF
  __int128 v21; // [rsp+78h] [rbp-40h]
  __int128 v22; // [rsp+88h] [rbp-30h]

  v4 = (__int128 *)TimerSetInformation;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v16[0] = 0;
  P = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && TimerSetInformationLength && ((unsigned __int8)TimerSetInformation & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( TimerSetInformationClass )
    return -1073741821;
  if ( TimerSetInformationLength != 48 )
    return -1073741820;
  if ( PreviousMode )
  {
    v20 = *(_OWORD *)TimerSetInformation;
    v21 = *((_OWORD *)TimerSetInformation + 1);
    v22 = *((_OWORD *)TimerSetInformation + 2);
    v4 = &v20;
  }
  if ( *((_DWORD *)v4 + 8) > 0x7FFFFFFFu )
    return -1073741583;
  v7 = *((_QWORD *)v4 + 3);
  if ( !v7 || (result = PoCaptureReasonContext(v7, PreviousMode, 0, 0, (__int64)v16, (__int64)&P), result >= 0) )
  {
    v8 = *((_QWORD *)v4 + 5);
    v9 = *((_DWORD *)v4 + 9);
    v17 = *((_DWORD *)v4 + 8);
    v10 = *((_QWORD *)v4 + 2);
    v11 = *((_QWORD *)v4 + 1);
    Object = 0LL;
    v12 = ObReferenceObjectByHandle(TimerHandle, 2u, 0LL, PreviousMode, &Object, 0LL);
    if ( v12 < 0 )
    {
LABEL_16:
      if ( v12 >= 0 && v12 != 1073741861 )
        return v12;
      goto LABEL_33;
    }
    v13 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
    if ( v13 == ExpIRTimerObjectType )
    {
      if ( !v11 && !v10 && !P && !v9 && !v8 )
      {
        v14 = ExpSetTimerObject2((ULONG_PTR)Object);
        goto LABEL_15;
      }
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      v12 = -1073741811;
    }
    else
    {
      if ( v13 == ExTimerObjectType )
      {
        v14 = ExpSetTimerObject((ULONG_PTR)Object, v10, (__int64)P, v16[0], v17, v9, v8);
LABEL_15:
        v12 = v14;
        goto LABEL_16;
      }
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      v12 = -1073741788;
    }
LABEL_33:
    if ( P )
      PoDestroyReasonContext(P);
    return v12;
  }
  return result;
}
