/*
 * XREFs of KiInitializeTopologyStructures @ 0x140B59298
 * Callers:
 *     KiInitializeKernel @ 0x140B588B0 (KiInitializeKernel.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140257130 (KeAddProcessorAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x1403AFC80 (KeCountSetBitsAffinityEx.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     Feature_PpmParkEx__private_IsEnabledNoReportingNoInline @ 0x1405B5004 (Feature_PpmParkEx__private_IsEnabledNoReportingNoInline.c)
 *     KeGetProcessorNode @ 0x1405BA92C (KeGetProcessorNode.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall KiInitializeTopologyStructures(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r12d
  int IsEnabledNoReportingNoInline; // eax
  __int64 v7; // r11
  bool v8; // r14
  int v9; // ecx
  __int64 v10; // r10
  __int64 v11; // rax
  int v12; // eax
  int v13; // ecx
  __int64 v14; // r15
  __int64 v15; // r8
  _DWORD *v16; // rdx
  int v17; // ecx
  int v18; // eax
  __int64 v19; // rbx
  _QWORD *v20; // rcx
  unsigned __int16 *v21; // rsi
  unsigned int v22; // r8d
  _DWORD *v23; // r13
  unsigned int v24; // r13d
  ULONG_PTR *v25; // rcx
  ULONG_PTR v26; // rsi
  int v27; // edx
  bool v28; // zf
  int v29; // r12d
  __int64 v30; // r14
  int v31; // r9d
  __int64 ProcessorNode; // rax
  __int64 v33; // rdx
  unsigned __int16 *v34; // rcx
  unsigned __int16 *v35; // rbx
  unsigned int v36; // eax
  _QWORD *v37; // rcx
  int v38; // esi
  __int64 v39; // rbx
  unsigned __int16 *v40; // rcx
  unsigned int v41; // eax
  __int64 result; // rax
  __int64 v43; // r10
  __int64 v44; // r11
  ULONG_PTR v45; // rdi
  __int64 v46; // r8
  __int64 v47; // r9
  _DWORD *v48; // rdx
  __int64 v49; // rcx
  bool v50; // [rsp+38h] [rbp-D0h]
  int v51; // [rsp+3Ch] [rbp-CCh]
  int v52; // [rsp+40h] [rbp-C8h]
  unsigned int v53; // [rsp+44h] [rbp-C4h]
  unsigned int v54; // [rsp+48h] [rbp-C0h]
  _DWORD *v55; // [rsp+50h] [rbp-B8h]
  __int64 *v56; // [rsp+58h] [rbp-B0h]
  _DWORD BugCheckParameter3[6]; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v58; // [rsp+78h] [rbp-90h]
  ULONG_PTR v59; // [rsp+88h] [rbp-80h]
  ULONG_PTR v60; // [rsp+90h] [rbp-78h]
  __int128 v61; // [rsp+98h] [rbp-70h]
  _OWORD v62[3]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v63; // [rsp+D8h] [rbp-30h]
  __int128 v64; // [rsp+E8h] [rbp-20h]
  __int128 v65; // [rsp+F8h] [rbp-10h]
  _OWORD v66[4]; // [rsp+108h] [rbp+0h] BYREF
  _OWORD v67[6]; // [rsp+150h] [rbp+48h] BYREF

  v4 = *(_DWORD *)(BugCheckParameter1 + 36);
  v54 = v4;
  v52 = *(_DWORD *)(BugCheckParameter1 + 212);
  v55 = (_DWORD *)(BugCheckParameter1 + 36);
  v61 = 0LL;
  memset(v62, 0, sizeof(v62));
  v63 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  memset(v66, 0, 48);
  IsEnabledNoReportingNoInline = Feature_PpmParkEx__private_IsEnabledNoReportingNoInline(BugCheckParameter1, a2, a3, a4);
  v7 = 0LL;
  v59 = BugCheckParameter1 + 40720;
  v8 = IsEnabledNoReportingNoInline != 0;
  v60 = BugCheckParameter1 + 40128;
  v50 = IsEnabledNoReportingNoInline != 0;
  *(_QWORD *)&v61 = BugCheckParameter1 + 35856;
  v58 = 0LL;
  if ( IsEnabledNoReportingNoInline )
    *((_QWORD *)&v61 + 1) = BugCheckParameter1 + 47424;
  v9 = *(_DWORD *)(BugCheckParameter1 + 164);
  *((_QWORD *)&v62[0] + 1) = BugCheckParameter1 + 36448;
  BugCheckParameter3[1] = v9;
  *(_QWORD *)&v62[1] = BugCheckParameter1 + 36472;
  v10 = 1LL;
  v11 = *((_QWORD *)&v62[2] + 1);
  if ( v8 )
    v11 = 0LL;
  BugCheckParameter3[0] = 1;
  *((_QWORD *)&v62[2] + 1) = v11;
  BugCheckParameter3[2] = *(_DWORD *)(BugCheckParameter1 + 40652);
  v12 = *(_DWORD *)(BugCheckParameter1 + 40648) * v9;
  v13 = *(_DWORD *)(BugCheckParameter1 + 160) * v9;
  *(_OWORD *)((char *)&v62[1] + 8) = 0LL;
  BugCheckParameter3[3] = v12;
  BugCheckParameter3[4] = v13;
  if ( v8 )
    BugCheckParameter3[5] = *(_DWORD *)(BugCheckParameter1 + 47944);
  v14 = v8 + 5LL;
  v15 = 0LL;
  do
  {
    v16 = &BugCheckParameter3[v15];
    v17 = ~(*v16 - 1);
    v18 = v17 & *(_DWORD *)(BugCheckParameter1 + 212);
    *((_DWORD *)&v66[3] + v15++) = v17;
    *(_DWORD *)((char *)v16 + BugCheckParameter1 - (_QWORD)BugCheckParameter3 + 36376) = v18;
  }
  while ( v15 < v14 );
  v19 = 1LL;
  do
  {
    v20 = (_QWORD *)*((_QWORD *)v62 + v19);
    if ( v20 )
      *v20 = *(_QWORD *)(BugCheckParameter1 + 200);
    v21 = (unsigned __int16 *)*((_QWORD *)&v58 + v19);
    if ( v21 )
    {
      *(_QWORD *)v21 = 2097153LL;
      memset_0(v21 + 4, 0, 0x100uLL);
      KeAddProcessorAffinityEx(v21, v4);
      v10 = 1LL;
      v7 = 0LL;
    }
    ++v19;
  }
  while ( v19 < v14 );
  v22 = KeNumberProcessors_0;
  v23 = v55;
  v53 = KeNumberProcessors_0;
  memset(v67, 0, 48);
  if ( v4 )
  {
    v24 = 0;
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v25 = (ULONG_PTR *)KiProcessorBlock;
      v56 = KiProcessorBlock;
      while ( 1 )
      {
        v26 = *v25;
        v63 = 0LL;
        v27 = *(_DWORD *)(v26 + 212);
        *(_QWORD *)&v64 = v26 + 40720;
        *((_QWORD *)&v64 + 1) = v26 + 40128;
        *(_QWORD *)&v65 = v26 + 35856;
        v51 = v27;
        if ( v8 )
          *((_QWORD *)&v65 + 1) = v26 + 47424;
        *(_QWORD *)&v66[0] = v7;
        *((_QWORD *)&v66[0] + 1) = v26 + 36448;
        v28 = !v8;
        v29 = v10;
        *(_QWORD *)&v66[1] = v26 + 36472;
        v30 = v10;
        *(_OWORD *)((char *)&v66[1] + 8) = 0LL;
        if ( !v28 )
          *((_QWORD *)&v66[2] + 1) = v7;
        v31 = v52;
        do
        {
          if ( (v27 & *((_DWORD *)&v66[3] + v30)) == (v31 & *((_DWORD *)&v66[3] + v30)) )
          {
            if ( *((_QWORD *)v67 + v30) == v7 )
            {
              KeGetProcessorNode(v26);
              ProcessorNode = KeGetProcessorNode(BugCheckParameter1);
              if ( v33 == ProcessorNode )
                *((_QWORD *)v67 + v30) = v26;
            }
            v34 = (unsigned __int16 *)*((_QWORD *)&v58 + v30);
            if ( v34 )
            {
              KeAddProcessorAffinityEx(v34, v24);
              v35 = (unsigned __int16 *)*((_QWORD *)&v63 + v30);
              KeAddProcessorAffinityEx(v35, v54);
              v36 = KeCountSetBitsAffinityEx(v35);
              if ( v36 > BugCheckParameter3[v30] )
                KeBugCheckEx(0x3Eu, v26, v36, (unsigned int)BugCheckParameter3[v30], v29);
              v22 = v53;
              v10 = 1LL;
              v31 = v52;
              v7 = 0LL;
            }
            v37 = (_QWORD *)*((_QWORD *)v62 + v30);
            v27 = v51;
            if ( v37 && *(_QWORD *)(BugCheckParameter1 + 192) == *(_QWORD *)(v26 + 192) )
            {
              *v37 |= *(_QWORD *)(v26 + 200);
              **((_QWORD **)v66 + v30) |= *(_QWORD *)(BugCheckParameter1 + 200);
            }
          }
          v29 += v10;
          v30 += v10;
        }
        while ( v30 < v14 );
        v24 += v10;
        v25 = (ULONG_PTR *)(v56 + 1);
        v53 = v22;
        ++v56;
        if ( v24 >= v22 )
          break;
        v8 = v50;
      }
    }
    v23 = v55;
  }
  v38 = v10;
  v39 = v10;
  do
  {
    v40 = (unsigned __int16 *)*((_QWORD *)&v58 + v39);
    if ( v40 )
    {
      v41 = KeCountSetBitsAffinityEx(v40);
      if ( v41 > BugCheckParameter3[v39] )
        KeBugCheckEx(0x3Eu, BugCheckParameter1, v41, (unsigned int)BugCheckParameter3[v39], v38);
      v10 = 1LL;
    }
    v38 += v10;
    v39 += v10;
  }
  while ( v39 < v14 );
  result = KeGetProcessorNode(BugCheckParameter1);
  v45 = BugCheckParameter1 - result + 47112;
  v46 = v44;
  v47 = 47112 - result;
  v48 = (_DWORD *)(result + 288);
  do
  {
    v49 = *((_QWORD *)v67 + v46);
    if ( *v23 != (_DWORD)v44 )
    {
      if ( v49 )
      {
        result = (__int64)v48 + v47;
        *(_DWORD *)((char *)v48 + v45) = *(_DWORD *)((char *)v48 + v47 + v49);
      }
      else
      {
        result = (unsigned int)*v48;
        *(_DWORD *)((char *)v48 + v45) = result;
        *v48 += v43;
      }
    }
    v46 += v43;
    ++v48;
  }
  while ( v46 < v14 );
  return result;
}
