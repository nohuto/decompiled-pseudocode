/*
 * XREFs of ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C00B5F24
 * Callers:
 *     CitProcessCallout @ 0x1C00362EC (CitProcessCallout.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C004F0F4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00919C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ?CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00A4464 (-CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C00B6580 (-CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     memmove @ 0x1C00D6F00 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DC58 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DD0C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C016E25C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C016E628 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C016F5AC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C016FA4C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C0233E00 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpContextUserLogon(struct _CIT_IMPACT_CONTEXT *a1, const struct _LUID *a2, __int64 a3)
{
  struct _KPROCESS *CurrentProcess; // rax
  PACCESS_TOKEN v5; // rax
  const char *v6; // rdx
  void *v7; // r14
  NTSTATUS InformationToken; // eax
  unsigned int v9; // ebx
  PSID v10; // r13
  ULONG v11; // eax
  NSInstrumentation::CLeakTrackingAllocator *v12; // rdi
  __int64 v13; // r10
  size_t v14; // rsi
  int v15; // eax
  __int64 Pool2; // rbx
  struct _CIT_IMPACT_CONTEXT *v17; // rcx
  struct _LUID v18; // rax
  unsigned int v20; // r8d
  int v21; // ecx
  _QWORD *v22; // rax
  unsigned int v23; // edx
  __int64 v24; // r10
  __int64 v25; // r11
  char v26; // r15
  unsigned int v27; // [rsp+38h] [rbp-D0h] BYREF
  ULONG ReturnLength[2]; // [rsp+40h] [rbp-C8h] BYREF
  struct _LUID AuthenticationId; // [rsp+48h] [rbp-C0h] BYREF
  void *TokenHandle; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v31[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+70h] [rbp-98h] BYREF
  struct _CIT_IMPACT_CONTEXT *v34; // [rsp+78h] [rbp-90h] BYREF
  PVOID BackTrace[20]; // [rsp+88h] [rbp-80h] BYREF
  PSID TokenInformation[12]; // [rsp+128h] [rbp+20h] BYREF

  TokenHandle = 0LL;
  AuthenticationId = 0LL;
  v34 = a1;
  CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(a1, a2, a3);
  v5 = PsReferencePrimaryToken(CurrentProcess);
  v7 = v5;
  if ( !v5 )
  {
    v9 = -1073741700;
    v20 = 628;
LABEL_21:
    v21 = v9;
LABEL_24:
    CitpLogFailureWorker(v21, v6, v20);
    goto LABEL_13;
  }
  InformationToken = SeQueryAuthenticationIdToken(v5, &AuthenticationId);
  v9 = InformationToken;
  if ( InformationToken < 0 )
  {
    v20 = 635;
    goto LABEL_23;
  }
  if ( AuthenticationId.LowPart == a2->LowPart && AuthenticationId.HighPart == a2->HighPart )
  {
    CitpParametersCompute((struct _CIT_PARAMETERS *)&xmmword_1C0293D04);
    if ( *((_BYTE *)&qword_1C0293D14 + 4) )
    {
      InformationToken = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, 0x200u, &TokenHandle);
      v9 = InformationToken;
      if ( InformationToken < 0 )
      {
        v20 = 666;
      }
      else
      {
        ReturnLength[0] = 0;
        InformationToken = ZwQueryInformationToken(TokenHandle, TokenUser, TokenInformation, 0x58u, ReturnLength);
        v9 = InformationToken;
        if ( InformationToken >= 0 )
        {
          v10 = TokenInformation[0];
          v11 = RtlLengthSid(TokenInformation[0]);
          v12 = gpLeakTrackingAllocator;
          v13 = v11;
          v14 = v11;
          v27 = 1231254357;
          v15 = *(_DWORD *)gpLeakTrackingAllocator;
          v32 = 260LL;
          v33 = v13;
          switch ( v15 )
          {
            case 0:
              Pool2 = ExAllocatePool2(260LL, (unsigned int)v13, 1231254357LL);
              if ( Pool2 )
                _InterlockedIncrement64((volatile signed __int64 *)v12 + 14);
              goto LABEL_11;
            case 1:
              if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
                     gpLeakTrackingAllocator,
                     0x49637355u)
                && v14 + 16 >= v14 )
              {
                v22 = (_QWORD *)ExAllocatePool2(v32 & 0xFFFFFFFFFFFFFFFDuLL, v14 + 16, v27);
                Pool2 = (__int64)v22;
                if ( !v22
                  || (_InterlockedIncrement64((volatile signed __int64 *)v12 + 14),
                      *v22 = 1231254357LL,
                      Pool2 = (__int64)(v22 + 2),
                      v22 == (_QWORD *)-16LL) )
                {
                  NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
                    *((NSInstrumentation::CPointerHashTable **)v12 + 1),
                    (const void *)0x49637355);
                }
LABEL_11:
                if ( Pool2 )
                {
LABEL_12:
                  memmove((void *)Pool2, v10, v14);
                  v17 = v34;
                  v18 = *a2;
                  *((_QWORD *)v34 + 12) = Pool2;
                  v9 = 0;
                  *((struct _LUID *)v17 + 13) = v18;
                  goto LABEL_13;
                }
              }
              break;
            case 2:
              v31[0] = 0LL;
              if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x49637355u, v31) )
              {
                v31[0] = (unsigned __int64)&v32;
                v31[1] = (unsigned __int64)&v27;
                Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                          (__int64)v12,
                          (__int64)v31,
                          &v33);
                goto LABEL_11;
              }
              v26 = 0;
              if ( v14 < 0x1000 || (v14 & 0xFFF) != 0 )
              {
                v24 += 16LL;
                v26 = 1;
                v33 = v24;
              }
              Pool2 = ExAllocatePool2(v25, v24, v23);
              if ( Pool2 )
              {
                _InterlockedIncrement64((volatile signed __int64 *)v12 + 16);
                NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
                if ( v26 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
                {
                  if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                          v12,
                                          Pool2,
                                          v31[0],
                                          BackTrace) )
                  {
                    Pool2 += 16LL;
                    goto LABEL_11;
                  }
                }
                else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                             v12,
                                             Pool2,
                                             v31[0],
                                             BackTrace) )
                {
                  goto LABEL_12;
                }
                _InterlockedIncrement64((volatile signed __int64 *)v12 + 17);
                _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
              }
              break;
          }
          v9 = -1073741670;
          v20 = 696;
          goto LABEL_21;
        }
        v20 = 682;
      }
LABEL_23:
      v21 = InformationToken;
      goto LABEL_24;
    }
    CitpCleanupGlobalImpactContext(&v34);
    v9 = -1073741637;
  }
  else
  {
    v9 = -1073741587;
  }
LABEL_13:
  if ( TokenHandle )
    ZwClose(TokenHandle);
  if ( v7 )
    PsDereferencePrimaryToken(v7);
  return v9;
}
