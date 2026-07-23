/*
 * XREFs of PnpReleaseBootResourcesForFilteredRequirements @ 0x1405A37AC
 * Callers:
 *     IopReleaseFilteredBootResources @ 0x140723328 (IopReleaseFilteredBootResources.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     IopFreeReqList @ 0x14071F4BC (IopFreeReqList.c)
 *     PnpCmResourcesToIoResources @ 0x140731264 (PnpCmResourcesToIoResources.c)
 *     IopResourceRequirementsListToReqList @ 0x140A65214 (IopResourceRequirementsListToReqList.c)
 *     IopCallArbiter @ 0x140A89AB8 (IopCallArbiter.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpReleaseBootResourcesForFilteredRequirements(__int64 *a1)
{
  void *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rdx
  int v7; // ebx
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rsi
  __int64 v14; // r14
  unsigned int v15; // edx
  unsigned int v16; // ecx
  __int64 v17; // r8
  __int64 v18; // rax
  _QWORD *v19; // rax
  int v20; // eax
  __int64 v21; // rcx
  __int64 *v22; // rax
  __int64 v23; // [rsp+38h] [rbp-59h] BYREF
  __int64 *v24; // [rsp+40h] [rbp-51h]
  __int64 v25; // [rsp+58h] [rbp-39h]
  int v26; // [rsp+60h] [rbp-31h]
  int v27; // [rsp+64h] [rbp-2Dh]
  __int64 v28; // [rsp+68h] [rbp-29h]
  __int64 v29; // [rsp+80h] [rbp-11h]
  __int64 v30; // [rsp+98h] [rbp+7h] BYREF
  int v31; // [rsp+A4h] [rbp+13h]
  __int64 v32; // [rsp+B0h] [rbp+1Fh]
  PVOID P[4]; // [rsp+B8h] [rbp+27h] BYREF

  memset_0(&v23, 0, 0x60uLL);
  v2 = 0LL;
  memset_0(&v30, 0, 0x40uLL);
  v4 = *a1;
  if ( *a1 )
    v5 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
  else
    v5 = 0LL;
  v6 = *(_QWORD *)(v5 + 544);
  if ( v6 && (v9 = PnpCmResourcesToIoResources(v3, v6, 1LL), (v2 = (void *)v9) != 0LL) )
  {
    v31 = 4;
    v32 = v9;
    v30 = v4;
    v7 = IopResourceRequirementsListToReqList(&v30, P);
    if ( v7 >= 0 )
    {
      if ( !P[0] )
      {
LABEL_9:
        ExFreePoolWithTag(v2, 0);
        return (unsigned int)v7;
      }
      v10 = *((_QWORD *)P[0] + 5);
      v7 = 0;
      v11 = *(_QWORD *)(v5 + 32);
      v12 = **(_QWORD **)(a1[4] + 16);
      v27 = 0;
      v28 = 0LL;
      v29 = 0LL;
      v13 = 0LL;
      v25 = v11;
      v26 = 4;
      while ( (unsigned int)v13 < *(_DWORD *)(v10 + 20) )
      {
        v14 = *(_QWORD *)(*(_QWORD *)(v10 + 8 * v13 + 24) + 288LL);
        if ( v14 )
        {
          v15 = *(_DWORD *)(v12 + 20);
          v16 = 0;
          if ( v15 )
          {
            v17 = v12 + 24;
            do
            {
              v18 = *(_QWORD *)(*(_QWORD *)v17 + 288LL);
              if ( v18 && *(_BYTE *)(v14 + 16) == *(_BYTE *)(v18 + 16) )
                break;
              ++v16;
              v17 += 8LL;
            }
            while ( v16 < v15 );
          }
          if ( v16 == v15 )
          {
            v24 = &v23;
            v23 = (__int64)&v23;
            v19 = *(_QWORD **)(v14 + 48);
            if ( *v19 != v14 + 40 )
              goto LABEL_29;
            v24 = *(__int64 **)(v14 + 48);
            v23 = v14 + 40;
            *v19 = &v23;
            *(_QWORD *)(v14 + 48) = &v23;
            v20 = IopCallArbiter(v14, 0LL);
            v21 = v23;
            v7 = v20;
            v22 = v24;
            if ( *(__int64 **)(v23 + 8) != &v23 || (__int64 *)*v24 != &v23 )
LABEL_29:
              __fastfail(3u);
            *v24 = v23;
            *(_QWORD *)(v21 + 8) = v22;
            if ( v7 < 0 )
              break;
            v7 = IopCallArbiter(v14, 2LL);
            if ( v7 < 0 )
              break;
          }
        }
        v13 = (unsigned int)(v13 + 1);
      }
    }
  }
  else
  {
    v7 = -1073741823;
  }
  if ( P[0] )
    IopFreeReqList(P[0]);
  if ( v2 )
    goto LABEL_9;
  return (unsigned int)v7;
}
