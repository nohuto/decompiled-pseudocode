/*
 * XREFs of KiInitializeTopologyStructures @ 0x140B5B318
 * Callers:
 *     KiInitializeKernel @ 0x140B5A930 (KiInitializeKernel.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x14039E490 (KeCountSetBitsAffinityEx.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     Feature_PpmParkEx__private_IsEnabledNoReportingNoInline @ 0x1405B2278 (Feature_PpmParkEx__private_IsEnabledNoReportingNoInline.c)
 *     KeGetProcessorNode @ 0x1405B7F5C (KeGetProcessorNode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KiInitializeTopologyStructures(ULONG_PTR BugCheckParameter1)
{
  unsigned int v1; // r12d
  int IsEnabledNoReportingNoInline; // eax
  __int64 v4; // r11
  bool v5; // r14
  int v6; // ecx
  __int64 v7; // r10
  __int64 v8; // rax
  int v9; // eax
  int v10; // ecx
  __int64 v11; // r15
  __int64 v12; // r8
  _DWORD *v13; // rdx
  int v14; // ecx
  int v15; // eax
  __int64 v16; // rbx
  _QWORD *v17; // rcx
  unsigned __int16 *v18; // rsi
  unsigned int v19; // r8d
  _DWORD *v20; // r13
  unsigned int v21; // r13d
  ULONG_PTR *v22; // rcx
  ULONG_PTR v23; // rsi
  int v24; // edx
  bool v25; // zf
  int v26; // r12d
  __int64 v27; // r14
  int v28; // r9d
  __int64 ProcessorNode; // rax
  __int64 v30; // rdx
  unsigned __int16 *v31; // rcx
  unsigned __int16 *v32; // rbx
  unsigned int v33; // eax
  _QWORD *v34; // rcx
  int v35; // esi
  __int64 v36; // rbx
  unsigned __int16 *v37; // rcx
  unsigned int v38; // eax
  __int64 result; // rax
  __int64 v40; // r10
  __int64 v41; // r11
  ULONG_PTR v42; // rdi
  __int64 v43; // r8
  __int64 v44; // r9
  _DWORD *v45; // rdx
  __int64 v46; // rcx
  bool v47; // [rsp+38h] [rbp-D0h]
  int v48; // [rsp+3Ch] [rbp-CCh]
  int v49; // [rsp+40h] [rbp-C8h]
  unsigned int v50; // [rsp+44h] [rbp-C4h]
  unsigned int v51; // [rsp+48h] [rbp-C0h]
  _DWORD *v52; // [rsp+50h] [rbp-B8h]
  __int64 *v53; // [rsp+58h] [rbp-B0h]
  _DWORD BugCheckParameter3[6]; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v55; // [rsp+78h] [rbp-90h]
  ULONG_PTR v56; // [rsp+88h] [rbp-80h]
  ULONG_PTR v57; // [rsp+90h] [rbp-78h]
  __int128 v58; // [rsp+98h] [rbp-70h]
  _OWORD v59[3]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v60; // [rsp+D8h] [rbp-30h]
  __int128 v61; // [rsp+E8h] [rbp-20h]
  __int128 v62; // [rsp+F8h] [rbp-10h]
  _OWORD v63[4]; // [rsp+108h] [rbp+0h] BYREF
  _OWORD v64[6]; // [rsp+150h] [rbp+48h] BYREF

  v1 = *(_DWORD *)(BugCheckParameter1 + 36);
  v51 = v1;
  v49 = *(_DWORD *)(BugCheckParameter1 + 212);
  v52 = (_DWORD *)(BugCheckParameter1 + 36);
  v58 = 0LL;
  memset(v59, 0, sizeof(v59));
  v60 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  memset(v63, 0, 48);
  IsEnabledNoReportingNoInline = Feature_PpmParkEx__private_IsEnabledNoReportingNoInline();
  v4 = 0LL;
  v56 = BugCheckParameter1 + 40720;
  v5 = IsEnabledNoReportingNoInline != 0;
  v57 = BugCheckParameter1 + 40128;
  v47 = IsEnabledNoReportingNoInline != 0;
  *(_QWORD *)&v58 = BugCheckParameter1 + 35856;
  v55 = 0LL;
  if ( IsEnabledNoReportingNoInline )
    *((_QWORD *)&v58 + 1) = BugCheckParameter1 + 47424;
  v6 = *(_DWORD *)(BugCheckParameter1 + 164);
  *((_QWORD *)&v59[0] + 1) = BugCheckParameter1 + 36448;
  BugCheckParameter3[1] = v6;
  *(_QWORD *)&v59[1] = BugCheckParameter1 + 36472;
  v7 = 1LL;
  v8 = *((_QWORD *)&v59[2] + 1);
  if ( v5 )
    v8 = 0LL;
  BugCheckParameter3[0] = 1;
  *((_QWORD *)&v59[2] + 1) = v8;
  BugCheckParameter3[2] = *(_DWORD *)(BugCheckParameter1 + 40652);
  v9 = *(_DWORD *)(BugCheckParameter1 + 40648) * v6;
  v10 = *(_DWORD *)(BugCheckParameter1 + 160) * v6;
  *(_OWORD *)((char *)&v59[1] + 8) = 0LL;
  BugCheckParameter3[3] = v9;
  BugCheckParameter3[4] = v10;
  if ( v5 )
    BugCheckParameter3[5] = *(_DWORD *)(BugCheckParameter1 + 47944);
  v11 = v5 + 5LL;
  v12 = 0LL;
  do
  {
    v13 = &BugCheckParameter3[v12];
    v14 = ~(*v13 - 1);
    v15 = v14 & *(_DWORD *)(BugCheckParameter1 + 212);
    *((_DWORD *)&v63[3] + v12++) = v14;
    *(_DWORD *)((char *)v13 + BugCheckParameter1 - (_QWORD)BugCheckParameter3 + 36376) = v15;
  }
  while ( v12 < v11 );
  v16 = 1LL;
  do
  {
    v17 = (_QWORD *)*((_QWORD *)v59 + v16);
    if ( v17 )
      *v17 = *(_QWORD *)(BugCheckParameter1 + 200);
    v18 = (unsigned __int16 *)*((_QWORD *)&v55 + v16);
    if ( v18 )
    {
      *(_QWORD *)v18 = 2097153LL;
      memset_0(v18 + 4, 0, 0x100uLL);
      KeAddProcessorAffinityEx(v18, v1);
      v7 = 1LL;
      v4 = 0LL;
    }
    ++v16;
  }
  while ( v16 < v11 );
  v19 = KeNumberProcessors_0;
  v20 = v52;
  v50 = KeNumberProcessors_0;
  memset(v64, 0, 48);
  if ( v1 )
  {
    v21 = 0;
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v22 = (ULONG_PTR *)KiProcessorBlock;
      v53 = KiProcessorBlock;
      while ( 1 )
      {
        v23 = *v22;
        v60 = 0LL;
        v24 = *(_DWORD *)(v23 + 212);
        *(_QWORD *)&v61 = v23 + 40720;
        *((_QWORD *)&v61 + 1) = v23 + 40128;
        *(_QWORD *)&v62 = v23 + 35856;
        v48 = v24;
        if ( v5 )
          *((_QWORD *)&v62 + 1) = v23 + 47424;
        *(_QWORD *)&v63[0] = v4;
        *((_QWORD *)&v63[0] + 1) = v23 + 36448;
        v25 = !v5;
        v26 = v7;
        *(_QWORD *)&v63[1] = v23 + 36472;
        v27 = v7;
        *(_OWORD *)((char *)&v63[1] + 8) = 0LL;
        if ( !v25 )
          *((_QWORD *)&v63[2] + 1) = v4;
        v28 = v49;
        do
        {
          if ( (v24 & *((_DWORD *)&v63[3] + v27)) == (v28 & *((_DWORD *)&v63[3] + v27)) )
          {
            if ( *((_QWORD *)v64 + v27) == v4 )
            {
              KeGetProcessorNode(v23);
              ProcessorNode = KeGetProcessorNode(BugCheckParameter1);
              if ( v30 == ProcessorNode )
                *((_QWORD *)v64 + v27) = v23;
            }
            v31 = (unsigned __int16 *)*((_QWORD *)&v55 + v27);
            if ( v31 )
            {
              KeAddProcessorAffinityEx(v31, v21);
              v32 = (unsigned __int16 *)*((_QWORD *)&v60 + v27);
              KeAddProcessorAffinityEx(v32, v51);
              v33 = KeCountSetBitsAffinityEx(v32);
              if ( v33 > BugCheckParameter3[v27] )
                KeBugCheckEx(0x3Eu, v23, v33, (unsigned int)BugCheckParameter3[v27], v26);
              v19 = v50;
              v7 = 1LL;
              v28 = v49;
              v4 = 0LL;
            }
            v34 = (_QWORD *)*((_QWORD *)v59 + v27);
            v24 = v48;
            if ( v34 && *(_QWORD *)(BugCheckParameter1 + 192) == *(_QWORD *)(v23 + 192) )
            {
              *v34 |= *(_QWORD *)(v23 + 200);
              **((_QWORD **)v63 + v27) |= *(_QWORD *)(BugCheckParameter1 + 200);
            }
          }
          v26 += v7;
          v27 += v7;
        }
        while ( v27 < v11 );
        v21 += v7;
        v22 = (ULONG_PTR *)(v53 + 1);
        v50 = v19;
        ++v53;
        if ( v21 >= v19 )
          break;
        v5 = v47;
      }
    }
    v20 = v52;
  }
  v35 = v7;
  v36 = v7;
  do
  {
    v37 = (unsigned __int16 *)*((_QWORD *)&v55 + v36);
    if ( v37 )
    {
      v38 = KeCountSetBitsAffinityEx(v37);
      if ( v38 > BugCheckParameter3[v36] )
        KeBugCheckEx(0x3Eu, BugCheckParameter1, v38, (unsigned int)BugCheckParameter3[v36], v35);
      v7 = 1LL;
    }
    v35 += v7;
    v36 += v7;
  }
  while ( v36 < v11 );
  result = KeGetProcessorNode(BugCheckParameter1);
  v42 = BugCheckParameter1 - result + 47112;
  v43 = v41;
  v44 = 47112 - result;
  v45 = (_DWORD *)(result + 288);
  do
  {
    v46 = *((_QWORD *)v64 + v43);
    if ( *v20 != (_DWORD)v41 )
    {
      if ( v46 )
      {
        result = (__int64)v45 + v44;
        *(_DWORD *)((char *)v45 + v42) = *(_DWORD *)((char *)v45 + v44 + v46);
      }
      else
      {
        result = (unsigned int)*v45;
        *(_DWORD *)((char *)v45 + v42) = result;
        *v45 += v40;
      }
    }
    v43 += v40;
    ++v45;
  }
  while ( v43 < v11 );
  return result;
}
