/*
 * XREFs of SepLogTokenSidManagement @ 0x140780AA0
 * Callers:
 *     SepDereferenceSidValuesBlock @ 0x140783E44 (SepDereferenceSidValuesBlock.c)
 *     SepSetTokenUserAndGroups @ 0x140AB26B4 (SepSetTokenUserAndGroups.c)
 * Callees:
 *     EtwWrite @ 0x140257AF0 (EtwWrite.c)
 *     RtlConvertLuidToUlonglong @ 0x1405FC4B8 (RtlConvertLuidToUlonglong.c)
 *     SepGetSidValuesDump @ 0x1405FC9DC (SepGetSidValuesDump.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall SepLogTokenSidManagement(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v7; // r8d
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // r9
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  ULONG v14; // eax
  wchar_t *v15; // rcx
  int v16; // r8d
  unsigned __int64 LastRebalanceQpc; // rax
  void *v18; // rcx
  void *v19; // r9
  int v20; // r10d
  void *v21; // rax
  int v22; // r9d
  __int64 v23; // rax
  int v24; // eax
  unsigned int v25; // ebx
  void *SidValuesDump; // r14
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned int v29; // ebx
  int v30; // ecx
  __int64 v31; // rax
  ULONG v32; // ebx
  void *v33; // rdi
  __int64 v34; // rax
  ULONG v35; // ecx
  __int64 v36; // rdx
  int v37; // [rsp+30h] [rbp-D0h] BYREF
  int v38; // [rsp+34h] [rbp-CCh] BYREF
  int v39; // [rsp+38h] [rbp-C8h] BYREF
  int v40; // [rsp+3Ch] [rbp-C4h] BYREF
  int v41; // [rsp+40h] [rbp-C0h] BYREF
  int v42; // [rsp+44h] [rbp-BCh] BYREF
  ULONG v43; // [rsp+48h] [rbp-B8h] BYREF
  ULONGLONG v44; // [rsp+50h] [rbp-B0h] BYREF
  ULONGLONG v45; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v46; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v47; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-90h] BYREF
  void *v49; // [rsp+80h] [rbp-80h]
  int v50; // [rsp+88h] [rbp-78h]
  int v51; // [rsp+8Ch] [rbp-74h]
  void *v52; // [rsp+90h] [rbp-70h]
  int v53; // [rsp+98h] [rbp-68h]
  int v54; // [rsp+9Ch] [rbp-64h]
  void *v55; // [rsp+A0h] [rbp-60h]
  int v56; // [rsp+A8h] [rbp-58h]
  int v57; // [rsp+ACh] [rbp-54h]
  ULONGLONG *v58; // [rsp+B0h] [rbp-50h]
  __int64 v59; // [rsp+B8h] [rbp-48h]
  ULONGLONG *v60; // [rsp+C0h] [rbp-40h]
  __int64 v61; // [rsp+C8h] [rbp-38h]
  int *v62; // [rsp+D0h] [rbp-30h]
  __int64 v63; // [rsp+D8h] [rbp-28h]
  int *v64; // [rsp+E0h] [rbp-20h]
  __int64 v65; // [rsp+E8h] [rbp-18h]
  int *v66; // [rsp+F0h] [rbp-10h]
  __int64 v67; // [rsp+F8h] [rbp-8h]
  __int64 *v68; // [rsp+100h] [rbp+0h]
  __int64 v69; // [rsp+108h] [rbp+8h]
  int *v70; // [rsp+110h] [rbp+10h]
  __int64 v71; // [rsp+118h] [rbp+18h]
  void *v72; // [rsp+120h] [rbp+20h]
  int v73; // [rsp+128h] [rbp+28h]
  int v74; // [rsp+12Ch] [rbp+2Ch]

  v7 = a1;
  v46 = 0LL;
  v40 = 0;
  v41 = 0;
  v47 = 0LL;
  v42 = 0;
  v43 = 0;
  if ( EtwKernelProvRegHandle && SepTokenSidManagementLoggingEnabled )
  {
    v8 = a5;
    if ( a4 )
    {
      v44 = RtlConvertLuidToUlonglong((LUID)(a4 + 16));
      v45 = RtlConvertLuidToUlonglong((LUID)(v9 + 24));
      v37 = *(_DWORD *)(v10 + 192);
      v38 = *(_DWORD *)(v10 + 196);
      v39 = *(_DWORD *)(v10 + 200);
      if ( (v39 & 0x20) == 0 )
        v8 = *(_QWORD *)(v10 + 216);
    }
    else
    {
      v44 = 0LL;
      v45 = 0LL;
      v37 = 0;
      v38 = 0;
      v39 = 0;
    }
    if ( v7 )
    {
      v11 = v7 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            if ( v13 == 1 )
            {
              v14 = 60;
              v15 = aUnassignedFrom;
            }
            else
            {
              v14 = 24;
              v15 = aDeallocated;
            }
          }
          else
          {
            v14 = 44;
            v15 = aUnassignedFrom_0;
          }
        }
        else
        {
          v14 = 50;
          v15 = aAssignedExisti;
        }
      }
      else
      {
        v14 = 34;
        v15 = aAssignedNewOwn;
      }
    }
    else
    {
      v14 = 40;
      v15 = aAssignedNewSha;
    }
    UserData.Ptr = (ULONGLONG)v15;
    v16 = 2;
    UserData.Size = v14;
    UserData.Reserved = 0;
    LastRebalanceQpc = KeGetCurrentThread()->ApcState.Process[1].LastRebalanceQpc;
    v18 = &unk_140E67810;
    if ( LastRebalanceQpc && *(_WORD *)LastRebalanceQpc )
    {
      v19 = *(void **)(LastRebalanceQpc + 8);
      v20 = *(unsigned __int16 *)(LastRebalanceQpc + 2);
    }
    else
    {
      v19 = &unk_140E67810;
      v20 = 2;
    }
    v49 = v19;
    v50 = v20;
    v51 = 0;
    if ( v8 && *(_WORD *)(v8 + 56) )
    {
      v21 = *(void **)(v8 + 64);
      v22 = *(unsigned __int16 *)(v8 + 58);
    }
    else
    {
      v21 = &unk_140E67810;
      v22 = 2;
    }
    v52 = v21;
    v53 = v22;
    v54 = 0;
    if ( v8 && *(_WORD *)(v8 + 72) )
    {
      v18 = *(void **)(v8 + 80);
      v16 = *(unsigned __int16 *)(v8 + 74);
    }
    v55 = v18;
    v58 = &v44;
    v60 = &v45;
    v62 = &v37;
    v64 = &v38;
    v66 = &v39;
    v56 = v16;
    v57 = 0;
    v59 = 8LL;
    v61 = 8LL;
    v63 = 4LL;
    v65 = 4LL;
    v67 = 4LL;
    if ( a2 )
      v23 = *(_QWORD *)(a2 + 8);
    else
      v23 = 0LL;
    v46 = v23;
    v68 = &v46;
    v69 = 8LL;
    if ( a2 )
      v24 = *(_DWORD *)(a2 + 16);
    else
      v24 = 0;
    v40 = v24;
    v70 = &v40;
    v25 = 11;
    v71 = 4LL;
    SidValuesDump = 0LL;
    if ( a2 && v24 )
    {
      SidValuesDump = (void *)SepGetSidValuesDump(a2, &v41);
      v73 = v41;
      v25 = 12;
      v72 = SidValuesDump;
      v74 = 0;
    }
    if ( a3 )
      v27 = *(_QWORD *)(a3 + 8);
    else
      v27 = 0LL;
    v47 = v27;
    v28 = v25;
    v29 = v25 + 1;
    v28 *= 2LL;
    *(&UserData.Ptr + v28) = (ULONGLONG)&v47;
    *((_QWORD *)&UserData.Size + v28) = 8LL;
    if ( !a3 || a2 == a3 )
      v30 = 0;
    else
      v30 = *(_DWORD *)(a3 + 16);
    v31 = 2LL * v29;
    v42 = v30;
    v32 = v29 + 1;
    v33 = 0LL;
    *(&UserData.Ptr + v31) = (ULONGLONG)&v42;
    *((_QWORD *)&UserData.Size + v31) = 4LL;
    if ( a3 && v30 )
    {
      v34 = SepGetSidValuesDump(a3, &v43);
      v35 = v43;
      v33 = (void *)v34;
      v36 = 2LL * v32++;
      *(&UserData.Ptr + v36) = v34;
      *(&UserData.Size + 2 * v36) = v35;
      *(&UserData.Reserved + 2 * v36) = 0;
    }
    EtwWrite(EtwKernelProvRegHandle, &TokenSidManagementLog, 0LL, v32, &UserData);
    if ( SidValuesDump )
      ExFreePoolWithTag(SidValuesDump, 0);
    if ( v33 )
      ExFreePoolWithTag(v33, 0);
  }
}
