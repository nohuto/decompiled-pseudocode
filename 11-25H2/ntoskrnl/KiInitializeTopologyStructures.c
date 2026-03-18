/*
 * XREFs of KiInitializeTopologyStructures @ 0x140B49318
 * Callers:
 *     KiInitializeKernel @ 0x140B48920 (KiInitializeKernel.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140256160 (KeAddProcessorAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x140271370 (KeCountSetBitsAffinityEx.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     KeGetProcessorNode @ 0x1405B6B08 (KeGetProcessorNode.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall KiInitializeTopologyStructures(ULONG_PTR BugCheckParameter1)
{
  unsigned int v1; // r15d
  int v3; // r10d
  __int64 v5; // r8
  ULONG_PTR v6; // rax
  int v7; // ecx
  int v8; // ecx
  ULONG_PTR v9; // r9
  __int64 v10; // rdx
  _DWORD *v11; // rcx
  int v12; // eax
  __int64 v13; // rsi
  __int64 v14; // r14
  _QWORD *v15; // rcx
  __int64 v16; // rbx
  unsigned int v17; // eax
  __int64 i; // r15
  __int64 v19; // rsi
  __int64 v20; // r13
  int v21; // r12d
  unsigned __int64 v22; // r14
  int v23; // edx
  __int64 ProcessorNode; // rax
  __int64 v25; // rdx
  unsigned __int16 *v26; // rcx
  unsigned __int16 *v27; // rbx
  unsigned int v28; // eax
  _QWORD *v29; // rcx
  int v30; // ebx
  unsigned int *v31; // r14
  unsigned __int16 **v32; // rsi
  unsigned int v33; // eax
  __int64 result; // rax
  __int64 v35; // r10
  __int64 v36; // r8
  ULONG_PTR v37; // rdi
  __int64 v38; // r9
  _DWORD *v39; // rdx
  __int64 v40; // rcx
  int v41; // [rsp+30h] [rbp-D0h]
  int v42; // [rsp+34h] [rbp-CCh]
  unsigned int v43; // [rsp+38h] [rbp-C8h]
  unsigned int v44; // [rsp+3Ch] [rbp-C4h]
  _DWORD *v45; // [rsp+40h] [rbp-C0h]
  int v46; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD BugCheckParameter3[5]; // [rsp+4Ch] [rbp-B4h] BYREF
  __int128 v48; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR v49; // [rsp+70h] [rbp-90h]
  ULONG_PTR v50; // [rsp+78h] [rbp-88h]
  ULONG_PTR v51; // [rsp+80h] [rbp-80h]
  __int128 v52; // [rsp+88h] [rbp-78h]
  __int128 v53; // [rsp+98h] [rbp-68h]
  __int64 v54; // [rsp+A8h] [rbp-58h]
  __int64 v55; // [rsp+B0h] [rbp-50h]
  _QWORD v56[9]; // [rsp+B8h] [rbp-48h] BYREF
  _OWORD v57[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v58; // [rsp+120h] [rbp+20h]
  _DWORD v59[16]; // [rsp+128h] [rbp+28h]

  v1 = *(_DWORD *)(BugCheckParameter1 + 36);
  v54 = 0LL;
  v3 = 1;
  v42 = *(_DWORD *)(BugCheckParameter1 + 212);
  v45 = (_DWORD *)(BugCheckParameter1 + 36);
  v49 = BugCheckParameter1 + 40720;
  v5 = 5LL;
  v43 = v1;
  v50 = BugCheckParameter1 + 40128;
  v51 = BugCheckParameter1 + 35856;
  memset(&v56[1], 0, 64);
  v46 = 1;
  v55 = 0LL;
  v56[0] = BugCheckParameter1 + 36448;
  v6 = BugCheckParameter1 + 36472;
  v7 = *(_DWORD *)(BugCheckParameter1 + 164);
  v56[1] = v6;
  BugCheckParameter3[1] = *(_DWORD *)(BugCheckParameter1 + 40652);
  LODWORD(v6) = *(_DWORD *)(BugCheckParameter1 + 40648) * v7;
  BugCheckParameter3[0] = v7;
  v8 = *(_DWORD *)(BugCheckParameter1 + 160) * v7;
  v52 = 0LL;
  BugCheckParameter3[2] = v6;
  v9 = BugCheckParameter1 - (_QWORD)&v46;
  v10 = 0LL;
  BugCheckParameter3[3] = v8;
  v53 = 0LL;
  v48 = 0LL;
  do
  {
    v11 = &BugCheckParameter3[v10 - 1];
    v12 = ~(BugCheckParameter3[v10 - 1] - 1);
    v59[v10++] = v12;
    *(_DWORD *)((char *)v11 + v9 + 36376) = *(_DWORD *)(BugCheckParameter1 + 212) & v12;
    --v5;
  }
  while ( v5 );
  v13 = 0LL;
  v14 = 4LL;
  do
  {
    v15 = (_QWORD *)v56[v13];
    if ( v15 )
      *v15 = *(_QWORD *)(BugCheckParameter1 + 200);
    v16 = *(_QWORD *)((char *)&v48 + v13 * 8 + 8);
    if ( v16 )
    {
      *(_DWORD *)(v16 + 4) = 0;
      *(_DWORD *)v16 = 2097153;
      memset_0((void *)(v16 + 8), 0, 0x100uLL);
      KeAddProcessorAffinityEx((unsigned __int16 *)v16, v1);
      v3 = 1;
    }
    ++v13;
    --v14;
  }
  while ( v14 );
  v58 = 0LL;
  memset(v57, 0, sizeof(v57));
  v17 = v1 != 0 ? KeNumberProcessors_0 : 0;
  v44 = v17;
  for ( i = 0LL; (unsigned int)i < v17; i = (unsigned int)(v3 + i) )
  {
    v56[4] = 0LL;
    v19 = KiProcessorBlock[i];
    v20 = 0LL;
    v21 = v3;
    v52 = 0LL;
    v22 = 0LL;
    v23 = *(_DWORD *)(v19 + 212);
    *(_QWORD *)&v53 = v19 + 40720;
    *((_QWORD *)&v53 + 1) = v19 + 40128;
    v54 = v19 + 35856;
    v56[5] = v19 + 36448;
    v56[6] = v19 + 36472;
    v41 = v23;
    *(_OWORD *)&v56[7] = 0LL;
    while ( v21 < 5 )
    {
      if ( (v23 & v59[v20 + 1]) == (v42 & v59[v20 + 1]) )
      {
        if ( !*(_QWORD *)((char *)v57 + v22 + 8) )
        {
          KeGetProcessorNode(v19);
          ProcessorNode = KeGetProcessorNode(BugCheckParameter1);
          if ( v25 == ProcessorNode )
            *(_QWORD *)((char *)v57 + v22 + 8) = v19;
        }
        v26 = *(unsigned __int16 **)((char *)&v48 + v22 + 8);
        if ( v26 )
        {
          KeAddProcessorAffinityEx(v26, i);
          v27 = *(unsigned __int16 **)((char *)&v52 + v22 + 8);
          KeAddProcessorAffinityEx(v27, v43);
          v28 = KeCountSetBitsAffinityEx(v27);
          if ( v28 > BugCheckParameter3[v20] )
            KeBugCheckEx(0x3Eu, v19, v28, (unsigned int)BugCheckParameter3[v20], v21);
          v3 = 1;
        }
        v29 = (_QWORD *)v56[v22 / 8];
        v23 = v41;
        if ( v29 )
        {
          if ( *(_QWORD *)(BugCheckParameter1 + 192) == *(_QWORD *)(v19 + 192) )
          {
            *v29 |= *(_QWORD *)(v19 + 200);
            *(_QWORD *)v56[v22 / 8 + 5] |= *(_QWORD *)(BugCheckParameter1 + 200);
          }
        }
      }
      v21 += v3;
      ++v20;
      v22 += 8LL;
    }
    v17 = v44;
  }
  v30 = v3;
  v31 = BugCheckParameter3;
  v32 = (unsigned __int16 **)&v48 + 1;
  while ( v30 < 5 )
  {
    if ( *v32 )
    {
      v33 = KeCountSetBitsAffinityEx(*v32);
      if ( v33 > *v31 )
        KeBugCheckEx(0x3Eu, BugCheckParameter1, v33, *v31, v30);
      v3 = 1;
    }
    v30 += v3;
    ++v32;
    ++v31;
  }
  result = KeGetProcessorNode(BugCheckParameter1);
  v36 = 0LL;
  v37 = BugCheckParameter1 - result + 36108;
  v38 = 36108 - result;
  v39 = (_DWORD *)(result + 288);
  do
  {
    v40 = *((_QWORD *)v57 + v36);
    if ( *v45 )
    {
      if ( v40 )
      {
        result = (__int64)v39 + v38;
        *(_DWORD *)((char *)v39 + v37) = *(_DWORD *)((char *)v39 + v38 + v40);
      }
      else
      {
        result = (unsigned int)*v39;
        *(_DWORD *)((char *)v39 + v37) = result;
        *v39 += v35;
      }
    }
    v36 += v35;
    ++v39;
  }
  while ( v36 < 5 );
  return result;
}
