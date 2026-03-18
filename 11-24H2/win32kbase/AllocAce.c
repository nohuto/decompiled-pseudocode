/*
 * XREFs of AllocAce @ 0x1400175A0
 * Callers:
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x140017D80 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     HMInitializeSecurityDescriptor @ 0x140124158 (HMInitializeSecurityDescriptor.c)
 *     InitSecurity @ 0x1402E3DD4 (InitSecurity.c)
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x1400183CC (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x14001C1C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1400406A8 (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x140040EBC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1401985D4 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019869C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     memset @ 0x14023F500 (memset.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall AllocAce(PVOID Buffer, char a2, char a3, int a4, PSID Sid, _DWORD *a6)
{
  unsigned __int64 v7; // rcx
  ULONG v8; // r12d
  size_t v9; // r14
  unsigned __int64 v10; // rbx
  __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // rdx
  _QWORD *Pool2; // rax
  _DWORD *v17; // rax
  unsigned __int64 i; // rbp
  char v19; // r15
  PVOID BackTrace[27]; // [rsp+20h] [rbp-D8h] BYREF
  ULONG DestinationSidLength; // [rsp+100h] [rbp+8h]

  DestinationSidLength = RtlLengthSid(Sid);
  v8 = DestinationSidLength + 8;
  if ( !Buffer )
  {
    LODWORD(v9) = 0;
    v13 = (__int64)Win32AllocPoolWithQuotaZInitImpl(v7, v8, 0x65737355u);
    if ( v13 )
      goto LABEL_8;
    return 0LL;
  }
  v9 = (unsigned int)*a6;
  v10 = v8 + (unsigned int)v9;
  if ( (unsigned int)v10 < (unsigned int)v9 )
    return 0LL;
  v11 = W32GetUserSessionState() + 72288;
  v12 = *(_DWORD *)v11;
  if ( *(_DWORD *)v11 )
  {
    if ( v12 == 1 )
    {
      if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
              (NSInstrumentation::CLeakTrackingAllocator *)v11,
              0x65737355u)
        || v10 + 16 < v10 )
      {
        return 0LL;
      }
      Pool2 = (_QWORD *)ExAllocatePool2(257LL, v10 + 16, 1702064981LL);
      v13 = (__int64)Pool2;
      if ( !Pool2
        || (_InterlockedIncrement64((volatile signed __int64 *)(v11 + 112)),
            *Pool2 = 1702064981LL,
            v13 = (__int64)(Pool2 + 2),
            Pool2 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *(NSInstrumentation::CPointerHashTable **)(v11 + 8),
          (const void *)0x65737355);
      }
      goto LABEL_6;
    }
    if ( v12 != 2 )
      return 0LL;
    if ( (*(_DWORD *)(v11 + 80) & 0x65737355) == 0x65737355 )
    {
      v17 = (_DWORD *)(v11 + 48);
      for ( i = 0LL; i < *(unsigned int *)(v11 + 84); ++i )
      {
        if ( *v17 == 1702064981 )
        {
          v19 = 0;
          if ( v10 < 0x1000 || (((_WORD)v8 + (_WORD)v9) & 0xFFF) != 0 )
          {
            v19 = 1;
            v10 += 16LL;
          }
          v13 = ExAllocatePool2(257LL, v10, 1702064981LL);
          if ( v13 )
          {
            _InterlockedIncrement64((volatile signed __int64 *)(v11 + 128));
            memset(BackTrace, 0, 0xA0uLL);
            RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
            if ( v19 && (unsigned __int64)(v13 & 0xFFF) + 16 < 0x1000 )
            {
              if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                      v11,
                                      v13,
                                      i,
                                      BackTrace) )
              {
                v13 += 16LL;
                goto LABEL_6;
              }
            }
            else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                         v11,
                                         v13,
                                         i,
                                         BackTrace) )
            {
              goto LABEL_7;
            }
            _InterlockedIncrement64((volatile signed __int64 *)(v11 + 136));
            _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)v13);
          }
          return 0LL;
        }
        ++v17;
      }
    }
  }
  v13 = ExAllocatePool2(257LL, v8 + (unsigned int)v9, 1702064981LL);
  if ( v13 )
    _InterlockedIncrement64((volatile signed __int64 *)(v11 + 112));
LABEL_6:
  if ( v13 )
  {
LABEL_7:
    memmove((void *)v13, Buffer, v9);
    GreDeleteFastMutex(Buffer);
LABEL_8:
    v14 = v13 + (unsigned int)v9;
    *a6 = v8 + v9;
    *(_BYTE *)v14 = a2;
    *(_BYTE *)(v14 + 1) = a3;
    *(_DWORD *)(v14 + 4) = a4;
    *(_WORD *)(v14 + 2) = v8;
    RtlCopySid(DestinationSidLength, (PSID)(v14 + 8), Sid);
    return v13;
  }
  return 0LL;
}
