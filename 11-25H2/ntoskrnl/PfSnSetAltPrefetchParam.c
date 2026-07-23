/*
 * XREFs of PfSnSetAltPrefetchParam @ 0x14073B764
 * Callers:
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     FsRtlAcquirePushLockExclusive @ 0x1402A2908 (FsRtlAcquirePushLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x1402E2370 (RtlRbInsertNodeEx.c)
 *     VmpReleasePushLockExclusive @ 0x1404857AC (VmpReleasePushLockExclusive.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PfSnAltProfileCleanup @ 0x14073B5B0 (PfSnAltProfileCleanup.c)
 *     PfSnCheckScenario @ 0x1408264CC (PfSnCheckScenario.c)
 *     PfSnAltProfileFindByScenarioId @ 0x1408271AC (PfSnAltProfileFindByScenarioId.c)
 *     PfSnAltProfileTreeCompareByScenarioId @ 0x140827240 (PfSnAltProfileTreeCompareByScenarioId.c)
 *     PfSnCalculateScenarioNameAndHash @ 0x140827288 (PfSnCalculateScenarioNameAndHash.c)
 *     PfCalculateProcessHash @ 0x140827880 (PfCalculateProcessHash.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     PfSnAltProfileFindByProcess @ 0x14091D3BC (PfSnAltProfileFindByProcess.c)
 *     PfSnAltProfileTreeCompareByProcess @ 0x14091D448 (PfSnAltProfileTreeCompareByProcess.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnSetAltPrefetchParam(ULONG_PTR BugCheckParameter1, _DWORD *a2, int a3)
{
  __int64 v5; // r14
  int v6; // r15d
  int v7; // edi
  PVOID v8; // r12
  int v9; // ebx
  __int64 v10; // rcx
  void *Pool2; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  unsigned __int64 Root; // rbx
  int v15; // edi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rbx
  int v18; // edi
  BOOLEAN v19; // r8
  unsigned __int64 v20; // rax
  PVOID Object; // [rsp+68h] [rbp-1E0h] BYREF
  int v23; // [rsp+70h] [rbp-1D8h] BYREF
  int v24; // [rsp+74h] [rbp-1D4h] BYREF
  int v25; // [rsp+78h] [rbp-1D0h] BYREF
  int v26; // [rsp+7Ch] [rbp-1CCh] BYREF
  int v27; // [rsp+80h] [rbp-1C8h] BYREF
  int v28[3]; // [rsp+84h] [rbp-1C4h] BYREF
  PVOID P; // [rsp+90h] [rbp-1B8h] BYREF
  _DWORD *v30; // [rsp+98h] [rbp-1B0h]
  __int64 v31; // [rsp+A8h] [rbp-1A0h]
  __int128 v32; // [rsp+B0h] [rbp-198h] BYREF
  wchar_t Str2[8]; // [rsp+C0h] [rbp-188h] BYREF
  __int128 v34; // [rsp+D0h] [rbp-178h]
  __int128 v35; // [rsp+E0h] [rbp-168h]
  __int128 v36; // [rsp+F0h] [rbp-158h]
  int v37; // [rsp+100h] [rbp-148h]
  char v38[256]; // [rsp+110h] [rbp-138h] BYREF

  v30 = a2;
  memset_0(Str2, 0, 0x44uLL);
  v32 = 0LL;
  v26 = 0;
  v23 = 0;
  v25 = 0;
  v24 = 0;
  v28[0] = 0;
  v27 = 0;
  P = 0LL;
  Object = 0LL;
  v5 = 0LL;
  v31 = 0LL;
  v6 = 0;
  v7 = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x73576650u, (__int64)&Object, 0LL, 0LL);
  if ( v7 < 0 )
  {
    v8 = Object;
  }
  else
  {
    v8 = Object;
    if ( Object != KeGetCurrentThread()->ApcState.Process )
    {
LABEL_3:
      v7 = -1073741811;
      goto LABEL_52;
    }
    if ( a3 != 4 )
    {
      v7 = -1073741820;
      goto LABEL_52;
    }
    LODWORD(v30) = *v30;
    v9 = (int)v30;
    if ( (unsigned int)v30 > 0x10 )
      goto LABEL_3;
    v7 = PfSnCheckScenario(0LL, &v27);
    if ( v7 >= 0 )
    {
      v7 = PfCalculateProcessHash(v8, &P);
      if ( v7 >= 0 )
      {
        Object = (PVOID)256;
        v7 = PfSnCalculateScenarioNameAndHash(v10, Str2, &v32, &v26, &v23, &v25, &v24, &Object, v38, v28, v8, P);
        if ( v7 >= 0 )
        {
          v37 = v23;
          HIDWORD(v36) = v26 + v25 + v24;
          Pool2 = (void *)ExAllocatePool2(0x100uLL);
          v5 = (__int64)Pool2;
          if ( !Pool2 )
          {
            v7 = -1073741670;
            goto LABEL_52;
          }
          memset_0(Pool2, 0, 0x80uLL);
          *(_DWORD *)(v5 + 124) = v9;
          *(_QWORD *)(v5 + 48) = v8;
          *(_OWORD *)(v5 + 56) = *(_OWORD *)Str2;
          *(_OWORD *)(v5 + 72) = v34;
          *(_OWORD *)(v5 + 88) = v35;
          *(_OWORD *)(v5 + 104) = v36;
          *(_DWORD *)(v5 + 120) = v37;
          v8 = 0LL;
          v6 = 1;
          FsRtlAcquirePushLockExclusive(&qword_140E66E78);
          v12 = PfSnAltProfileFindByScenarioId(Str2);
          if ( v12 )
          {
            if ( *(_QWORD *)(v5 + 48) != *(_QWORD *)(v12 + 48) )
            {
              v7 = -1073740008;
              goto LABEL_52;
            }
            *(_DWORD *)(v12 + 124) = v9;
          }
          else
          {
            Object = *(PVOID *)(v5 + 48);
            if ( PfSnAltProfileFindByProcess(Object) )
              goto LABEL_3;
            Root = (unsigned __int64)Parent.Root;
            if ( (*(_BYTE *)&Parent.0 & 1) != 0 && Parent.Root )
              Root = (unsigned __int64)&Parent ^ (unsigned __int64)Parent.Root;
            v15 = *(_BYTE *)&Parent.0 & 1;
            LOBYTE(v13) = 0;
            if ( Root )
            {
              while ( 1 )
              {
                if ( (int)PfSnAltProfileTreeCompareByProcess(Object, Root, v13) < 0 )
                {
                  v16 = *(_QWORD *)Root;
                  if ( v15 )
                  {
                    if ( !v16 )
                      goto LABEL_33;
                    v16 ^= Root;
                  }
                  if ( !v16 )
                  {
LABEL_33:
                    LOBYTE(v13) = 0;
                    break;
                  }
                }
                else
                {
                  v16 = *(_QWORD *)(Root + 8);
                  if ( v15 )
                  {
                    if ( !v16 )
                      goto LABEL_27;
                    v16 ^= Root;
                  }
                  if ( !v16 )
                  {
LABEL_27:
                    LOBYTE(v13) = 1;
                    break;
                  }
                }
                Root = v16;
              }
            }
            RtlRbInsertNodeEx(&Parent, (PRTL_BALANCED_NODE)Root, v13, (PRTL_BALANCED_NODE)v5);
            v17 = (unsigned __int64)Tree.Root;
            if ( (*(_BYTE *)&Tree.0 & 1) != 0 && Tree.Root )
              v17 = (unsigned __int64)&Tree ^ (unsigned __int64)Tree.Root;
            v18 = *(_BYTE *)&Tree.0 & 1;
            v19 = 0;
            if ( v17 )
            {
              while ( 1 )
              {
                if ( (int)PfSnAltProfileTreeCompareByScenarioId((wchar_t *)(v5 + 56)) < 0 )
                {
                  v20 = *(_QWORD *)v17;
                  if ( v18 )
                  {
                    if ( !v20 )
                      goto LABEL_49;
                    v20 ^= v17;
                  }
                  if ( !v20 )
                  {
LABEL_49:
                    v19 = 0;
                    break;
                  }
                }
                else
                {
                  v20 = *(_QWORD *)(v17 + 8);
                  if ( v18 )
                  {
                    if ( !v20 )
                      goto LABEL_43;
                    v20 ^= v17;
                  }
                  if ( !v20 )
                  {
LABEL_43:
                    v19 = 1;
                    break;
                  }
                }
                v17 = v20;
              }
            }
            RtlRbInsertNodeEx(&Tree, (PRTL_BALANCED_NODE)v17, v19, (PRTL_BALANCED_NODE)(v5 + 24));
            VmpReleasePushLockExclusive((volatile signed __int64 *)&qword_140E66E78);
            v6 = 0;
            v5 = 0LL;
          }
          v7 = 0;
        }
      }
    }
  }
LABEL_52:
  if ( v6 )
    VmpReleasePushLockExclusive((volatile signed __int64 *)&qword_140E66E78);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v5 )
  {
    PfSnAltProfileCleanup(v5);
    ExFreePoolWithTag((PVOID)v5, 0x66506343u);
  }
  if ( v8 )
    ObfDereferenceObjectWithTag(v8, 0x73576650u);
  return (unsigned int)v7;
}
