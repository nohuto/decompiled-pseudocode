/*
 * XREFs of RtlpHpSegPageRangeCommit @ 0x1800125C0
 * Callers:
 *     RtlpHpSegLfhVsCommit @ 0x180009F80 (RtlpHpSegLfhVsCommit.c)
 *     RtlpHpVsSubsegmentCreate @ 0x18000B8C0 (RtlpHpVsSubsegmentCreate.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x18000CA10 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpSegAlloc @ 0x18000D080 (RtlpHpSegAlloc.c)
 *     RtlpHpVsChunkSplit @ 0x18000E810 (RtlpHpVsChunkSplit.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x180010710 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x180011FD0 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpSegReAlloc @ 0x18002C120 (RtlpHpSegReAlloc.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x180030120 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpMetadataCommit @ 0x180033EE4 (RtlpHpMetadataCommit.c)
 *     RtlpHpSegLfhVsDecommit @ 0x1800E0FC0 (RtlpHpSegLfhVsDecommit.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18000D714 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     RtlpHpSegMgrCommit @ 0x1800BADA0 (RtlpHpSegMgrCommit.c)
 *     RtlpLogHeapDecommit @ 0x1800E1620 (RtlpLogHeapDecommit.c)
 *     RtlpLogHeapCommit @ 0x1801170C8 (RtlpLogHeapCommit.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpSegPageRangeCommit(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        _DWORD *a6)
{
  __int64 v8; // r13
  int v9; // r10d
  __int64 v10; // r8
  unsigned int v11; // edx
  unsigned int v12; // r8d
  int v13; // eax
  __int64 result; // rax
  unsigned int v15; // eax
  char v16; // dl
  unsigned int v17; // eax
  unsigned int v18; // r10d
  int v19; // edi
  unsigned int v20; // r11d
  int v21; // ebx
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // r8
  unsigned int v24; // r12d
  unsigned int v25; // eax
  int v26; // r10d
  unsigned int v27; // r13d
  unsigned __int64 v28; // r14
  bool v29; // zf
  unsigned int v30; // edx
  int v31; // ecx
  unsigned int v32; // edx
  int v33; // ecx
  unsigned int v34; // r14d
  int v35; // edi
  __int64 v36; // r12
  int v37; // eax
  unsigned __int64 v38; // r8
  __int64 v39; // r9
  unsigned int v40; // r13d
  unsigned int v41; // r12d
  char v42; // cl
  int v43; // edx
  unsigned __int64 v44; // r8
  int v45; // r14d
  unsigned int v46; // r10d
  unsigned __int64 v47; // r11
  int v48; // r14d
  bool v49; // zf
  unsigned int v50; // r10d
  unsigned int v51; // ecx
  unsigned int v52; // ecx
  unsigned int v53; // eax
  __int64 *v54; // rcx
  __int64 v55; // rcx
  int v56; // eax
  unsigned int v57; // ecx
  unsigned int v58; // eax
  int v59; // ebx
  unsigned int v60; // ecx
  unsigned int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // r8
  unsigned int v65; // [rsp+48h] [rbp-B8h]
  int v66; // [rsp+4Ch] [rbp-B4h]
  unsigned int v68; // [rsp+5Ch] [rbp-A4h]
  unsigned int v69; // [rsp+60h] [rbp-A0h]
  unsigned int v70; // [rsp+64h] [rbp-9Ch]
  int v71; // [rsp+68h] [rbp-98h]
  __int64 v72; // [rsp+70h] [rbp-90h]
  unsigned int v73; // [rsp+78h] [rbp-88h]
  __int64 v74; // [rsp+80h] [rbp-80h] BYREF
  __int64 v75; // [rsp+88h] [rbp-78h] BYREF
  __int64 v76; // [rsp+90h] [rbp-70h] BYREF
  __int64 v77; // [rsp+98h] [rbp-68h] BYREF
  __int64 v78; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD *v79; // [rsp+A8h] [rbp-58h]
  _EVENT_DATA_DESCRIPTOR v80; // [rsp+B0h] [rbp-50h] BYREF
  __int64 *v81; // [rsp+D0h] [rbp-30h]
  __int64 v82; // [rsp+D8h] [rbp-28h]
  __int64 *v83; // [rsp+E0h] [rbp-20h]
  __int64 v84; // [rsp+E8h] [rbp-18h]
  __int64 *v85; // [rsp+F0h] [rbp-10h]
  __int64 v86; // [rsp+F8h] [rbp-8h]
  __int64 *v87; // [rsp+100h] [rbp+0h]
  __int64 v88; // [rsp+108h] [rbp+8h]
  __int64 *v89; // [rsp+110h] [rbp+10h]
  __int64 v90; // [rsp+118h] [rbp+18h]

  v79 = a6;
  v8 = a2;
  v9 = 511;
  if ( (*(_BYTE *)(a1 + 13) & 7) == 0 )
    v9 = 0x7FFF;
  v71 = v9;
  v10 = a2 - (a2 & *(_QWORD *)a1);
  v11 = a4 + a3;
  v12 = (unsigned int)(v10 >> 5) << *(_BYTE *)(a1 + 9);
  v73 = v12;
  if ( a4 <= 0 )
    v11 = a3 - a4;
  v13 = 0;
  v70 = v11;
  while ( 1 )
  {
    v66 = v13;
    if ( a3 >= v11 )
    {
      if ( v79 )
        *v79 = v13;
      return 0LL;
    }
    v15 = v11;
    v16 = *(_BYTE *)(a1 + 9);
    v17 = v15 - a3;
    v18 = v9 - (v9 & (a3 + v12)) + 1;
    v19 = -1;
    if ( v18 >= v17 )
      v18 = v17;
    v20 = 1 << v16;
    v65 = v18;
    v21 = 0;
    v22 = (unsigned __int64)a3 >> v16 << v16;
    v23 = v8 + 32 * ((unsigned __int64)a3 >> v16);
    v24 = a3 & ((1 << v16) - 1);
    v25 = v18 + v24 - 1;
    v26 = -1;
    v27 = (v25 & ((1 << v16) - 1)) + 1;
    v28 = v23 + 32 * ((unsigned __int64)v25 >> v16);
    if ( v24 )
    {
      v57 = *(unsigned __int8 *)(v23 + 25);
      v58 = 1 << v16;
      if ( v23 == v28 )
        v58 = v27;
      if ( a4 <= 0 )
      {
        if ( v57 > v24 )
        {
          v26 = v22 + v24;
          v59 = a3 & ((1 << v16) - 1);
          v19 = v57 + v22;
          goto LABEL_81;
        }
      }
      else if ( v57 < v58 )
      {
        v26 = v57 + v22;
        v59 = v58;
        v19 = v22 + v58;
LABEL_81:
        v21 = v59 - v57;
        if ( v21 && a4 <= 0 )
          *(_BYTE *)(v23 + 25) = v57 + v21;
      }
      v23 += 32LL;
      LODWORD(v22) = v20 + v22;
    }
    v29 = v23 == v28;
    while ( v23 < v28 )
    {
      v30 = *(unsigned __int8 *)(v23 + 25);
      v31 = 0;
      if ( a4 <= 0 )
      {
        if ( *(_BYTE *)(v23 + 25) )
        {
          v19 = v30 + v22;
          v31 = -v30;
          v56 = v22;
          if ( v26 != -1 )
            v56 = v26;
          v26 = v56;
          goto LABEL_20;
        }
      }
      else if ( v30 < v20 )
      {
        if ( v26 == -1 )
          v26 = v30 + v22;
        v19 = v22 + v20;
        v31 = v20 - v30;
LABEL_20:
        if ( v31 && a4 <= 0 )
          *(_BYTE *)(v23 + 25) = v30 + v31;
      }
      v21 += v31;
      v23 += 32LL;
      LODWORD(v22) = v20 + v22;
      v29 = v23 == v28;
    }
    if ( v29 )
    {
      v32 = *(unsigned __int8 *)(v23 + 25);
      v33 = 0;
      if ( a4 <= 0 )
      {
        if ( *(_BYTE *)(v23 + 25) )
        {
          v19 = v32 + v22;
          v33 = -v32;
          if ( v26 != -1 )
            LODWORD(v22) = v26;
          v26 = v22;
LABEL_28:
          if ( v33 && a4 <= 0 )
            *(_BYTE *)(v23 + 25) = v32 + v33;
        }
      }
      else if ( v32 < v27 )
      {
        if ( v26 == -1 )
          v26 = v32 + v22;
        v19 = v22 + v27;
        v33 = v27 - v32;
        goto LABEL_28;
      }
      v21 += v33;
    }
    v8 = a2;
    v34 = v26;
    if ( !v21 )
      v34 = a3;
    v35 = v19 - v26;
    if ( v21 )
      break;
LABEL_62:
    a3 += v65;
    v11 = v70;
    v13 = v21 + v66;
    v12 = v73;
    v9 = v71;
  }
  v36 = a2 & *(_QWORD *)a1;
  v72 = v36;
  v69 = v34 + v73;
  if ( v21 <= 0 )
  {
    v37 = 0x4000;
  }
  else
  {
    v37 = 4096;
    if ( (a5 & 2) != 0 )
      v37 = 1073745920;
  }
  result = RtlpHpSegMgrCommit(a1, v21, v37, (a5 >> 22) & 2);
  if ( (int)result >= 0 )
  {
    if ( v21 > 0 )
    {
      v40 = 1 << *(_BYTE *)(a1 + 9);
      v41 = 0;
      v42 = *(_BYTE *)(a1 + 9);
      v43 = -1;
      v44 = (unsigned __int64)v34 >> v42;
      v39 = v44 << v42;
      v38 = a2 + 32 * v44;
      v45 = (v40 - 1) & v34;
      v46 = ((v35 + v45 - 1) & (v40 - 1)) + 1;
      v47 = v38 + 32 * ((unsigned __int64)(unsigned int)(v35 + v45 - 1) >> v42);
      v68 = v46;
      if ( !v45 )
      {
        v48 = -1;
        goto LABEL_40;
      }
      v60 = *(unsigned __int8 *)(v38 + 25);
      v61 = 1 << *(_BYTE *)(a1 + 9);
      if ( v38 == v47 )
        v61 = ((v35 + v45 - 1) & (v40 - 1)) + 1;
      if ( v60 >= v61 )
      {
        v48 = -1;
        goto LABEL_88;
      }
      v43 = v60 + v39;
      v48 = v39 + v61;
      v41 = v61 - v60;
      if ( v61 == v60 )
      {
LABEL_88:
        v38 += 32LL;
        v39 = v40 + (unsigned int)v39;
      }
      else
      {
        *(_BYTE *)(v38 + 25) = v61;
        v38 += 32LL;
        v39 = v40 + (unsigned int)v39;
      }
LABEL_40:
      v49 = v38 == v47;
      if ( v38 < v47 )
      {
        do
        {
          v50 = *(unsigned __int8 *)(v38 + 25);
          v51 = 0;
          if ( v50 < v40 )
          {
            if ( v43 == -1 )
              v43 = v50 + v39;
            v48 = v39 + v40;
            v51 = v40 - v50;
          }
          if ( v51 )
            *(_BYTE *)(v38 + 25) = v50 + v51;
          v41 += v51;
          v38 += 32LL;
          v39 = v40 + (unsigned int)v39;
          v49 = v38 == v47;
        }
        while ( v38 < v47 );
        v46 = v68;
      }
      if ( v49 )
      {
        v52 = *(unsigned __int8 *)(v38 + 25);
        v53 = 0;
        if ( v52 < v46 )
        {
          if ( v43 == -1 )
            v43 = v52 + v39;
          v48 = v39 + v46;
          v53 = v46 - v52;
          if ( v46 != v52 )
            *(_BYTE *)(v38 + 25) = v46;
        }
        v41 += v53;
      }
      v8 = a2;
      v29 = v41 == 0;
      v36 = v72;
      if ( !v29 )
        v35 = v48 - v43;
    }
    _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 8), v21);
    if ( (RtlpHpHeapFeatures & 8) != 0 )
    {
      v54 = (__int64 *)(a1 + *(__int16 *)(a1 + 22));
      if ( (unsigned int)dword_1801CE670 > 5 )
      {
        v74 = *(_QWORD *)(a1 + 56);
        v82 = 8LL;
        v81 = &v74;
        v75 = *v54;
        v83 = &v75;
        v76 = v54[1];
        v85 = &v76;
        v77 = v54[2];
        v87 = &v77;
        v78 = v54[3];
        v89 = &v78;
        v84 = 8LL;
        v86 = 8LL;
        v88 = 8LL;
        v90 = 8LL;
        tlgWriteTransfer_EtwEventWriteTransfer(
          (__int64)&dword_1801CE670,
          (unsigned __int8 *)dword_1801A43AB,
          v38,
          v39,
          7u,
          &v80);
      }
    }
    *(_WORD *)(v8 + 28) = ~(v21 + ~*(_WORD *)(v8 + 28));
    v55 = *(_QWORD *)(a1 + 56);
    if ( *(char *)(v55 + 20) < 0 )
    {
      v62 = v36 + (v69 << 12);
      v63 = (unsigned int)(v35 << 12);
      if ( v21 <= 0 )
        RtlpLogHeapDecommit(v55, v62, v63, 13LL);
      else
        RtlpLogHeapCommit(v55, v62, v63, 10LL);
    }
    goto LABEL_62;
  }
  return result;
}
