/*
 * XREFs of ?GetPeakValue@CMeterSoftware@@UEAAJPEAM@Z @ 0x180048E90
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800150E8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x180060D98 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMeterSoftware::GetPeakValue(struct _RTL_CRITICAL_SECTION *this, float *a2)
{
  int v2; // ebx
  float v5; // xmm6_4
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  ULONG_PTR SpinCount; // rcx
  int v8; // eax
  unsigned int LockSemaphore; // ecx
  float *v10; // rax
  __int64 v11; // rdx
  float v12; // xmm0_4
  float v13; // xmm6_4
  _BYTE v15[128]; // [rsp+20h] [rbp-C8h] BYREF

  v2 = 0;
  v5 = 0.0;
  if ( !a2 )
    return 2147500035LL;
  v6 = this + 1;
  EnterCriticalSection(this + 1);
  SpinCount = this->SpinCount;
  if ( !SpinCount )
    goto LABEL_8;
  if ( LODWORD(this->LockSemaphore) <= 0x20 )
  {
    v8 = (*(__int64 (__fastcall **)(ULONG_PTR, _BYTE *))(*(_QWORD *)SpinCount + 24LL))(SpinCount, v15);
    v2 = v8;
    if ( v8 < 0 )
    {
      if ( v8 == -2147417848 || v8 == -2147023174 || v8 == -2147023179 )
      {
        ATL::CComPtrBase<IPart>::Release(&this->SpinCount);
        v2 = 0;
      }
    }
    else
    {
      LockSemaphore = (unsigned int)this->LockSemaphore;
      if ( LockSemaphore )
      {
        v10 = (float *)v15;
        v11 = LockSemaphore;
        do
        {
          v12 = *v10++;
          v5 = fmaxf(v12, v5);
          --v11;
        }
        while ( v11 );
      }
    }
LABEL_8:
    if ( v6 )
      LeaveCriticalSection(v6);
    v13 = fminf(v5, 1.0);
    if ( v13 <= 0.0 )
      v13 = 0.0;
    *a2 = v13;
    if ( v2 < 0 )
      AudSrvTraceLoggingErrorHelper("CMeterSoftware::GetPeakValue", 630, v2);
    return (unsigned int)v2;
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  return 2147942487LL;
}
