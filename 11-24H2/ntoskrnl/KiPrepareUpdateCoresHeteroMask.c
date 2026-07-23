/*
 * XREFs of KiPrepareUpdateCoresHeteroMask @ 0x140738D6C
 * Callers:
 *     KiConfigureHeteroMultiCoreProcessors @ 0x140A8C988 (KiConfigureHeteroMultiCoreProcessors.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     KeIsEmptyAffinityEx @ 0x140371960 (KeIsEmptyAffinityEx.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14039FF30 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall KiPrepareUpdateCoresHeteroMask(
        char a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        char a7,
        struct _KAFFINITY_EX *a8,
        struct _KAFFINITY_EX *a9,
        struct _KAFFINITY_EX *a10,
        unsigned __int16 *a11,
        struct _KAFFINITY_EX *a12,
        struct _KAFFINITY_EX *a13)
{
  __int64 v13; // r15
  struct _KAFFINITY_EX *v14; // rbx
  unsigned __int8 v15; // si
  __int64 v16; // r13
  unsigned __int8 v17; // r12
  unsigned __int8 v18; // di
  unsigned __int8 v19; // r14
  int v20; // ecx
  unsigned int v21; // ebx
  __int64 v22; // rax
  __int64 v23; // r13
  bool v24; // zf
  __int64 v25; // rdx
  unsigned __int8 v26; // r8
  unsigned __int8 v27; // cl
  unsigned __int8 v28; // al
  unsigned __int8 v29; // cl
  unsigned __int8 v30; // al
  unsigned __int8 v31; // al
  struct _KAFFINITY_EX *v32; // rsi
  int v33; // ebx
  unsigned __int8 v34; // cl
  unsigned __int8 v35; // al
  struct _KAFFINITY_EX *v36; // r14
  unsigned __int16 *p_Count; // r15
  unsigned int v38; // ebx
  __int64 v39; // rsi
  int v40; // eax
  int v41; // r12d
  unsigned __int8 v42; // cl
  unsigned __int8 v43; // al
  struct _KAFFINITY_EX *v44; // r15
  unsigned int v45; // edi
  __int64 v46; // rbx
  __int64 v47; // rbx
  __int64 v48; // rdi
  struct _KAFFINITY_EX *v49; // r8
  struct _KAFFINITY_EX *v50; // rcx
  struct _KAFFINITY_EX *v51; // rcx
  struct _KAFFINITY_EX *v52; // r8
  struct _KAFFINITY_EX *v53; // r8
  struct _KAFFINITY_EX *v54; // rcx
  struct _KAFFINITY_EX *v55; // rcx
  struct _KAFFINITY_EX *v56; // rcx
  unsigned int v58; // [rsp+24h] [rbp-DCh] BYREF
  int v59; // [rsp+28h] [rbp-D8h]
  struct _KAFFINITY_EX *v60; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v61; // [rsp+38h] [rbp-C8h]
  __int16 v62; // [rsp+40h] [rbp-C0h]
  int v63; // [rsp+42h] [rbp-BEh]
  __int16 v64; // [rsp+46h] [rbp-BAh]
  int v65; // [rsp+48h] [rbp-B8h]
  int v66; // [rsp+4Ch] [rbp-B4h]
  struct _KAFFINITY_EX *v67; // [rsp+50h] [rbp-B0h]
  struct _KAFFINITY_EX *v68; // [rsp+58h] [rbp-A8h]
  struct _KAFFINITY_EX *v69; // [rsp+60h] [rbp-A0h]
  __int64 v70; // [rsp+68h] [rbp-98h]
  struct _KAFFINITY_EX *v71; // [rsp+70h] [rbp-90h]
  struct _KAFFINITY_EX *v72; // [rsp+78h] [rbp-88h]
  struct _KAFFINITY_EX *v73; // [rsp+80h] [rbp-80h]
  struct _KAFFINITY_EX v74; // [rsp+90h] [rbp-70h] BYREF

  v13 = a2;
  v14 = a9;
  v15 = 0;
  v67 = a8;
  v68 = a10;
  v69 = (struct _KAFFINITY_EX *)a11;
  v72 = a12;
  v66 = a3;
  v70 = a2;
  v73 = a13;
  v65 = a4;
  v71 = a9;
  v63 = 0;
  v64 = 0;
  memset_0(&v74.8, 0, sizeof(v74.8));
  *(_QWORD *)&v74.Count = 2097153LL;
  memset_0(&v74.8, 0, sizeof(v74.8));
  v16 = a6;
  v17 = -1;
  v58 = 0;
  v18 = 0;
  v19 = -1;
  v20 = *(_DWORD *)(a6 + 4);
  v59 = v20;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v21 = v58;
    do
    {
      v22 = a5 + v20 * v21;
      v23 = v22;
      if ( a1 )
        v24 = *(_BYTE *)(a6 + 4 * v22 + 27) == 0;
      else
        v24 = *(_BYTE *)(a6 + 4 * v22 + 26) == 0;
      if ( v24 )
      {
        KeAddProcessorAffinityEx(&v74.Count, v21);
        v25 = v66 + 2LL * v65;
        v26 = *(_BYTE *)(v21 + *(_QWORD *)(a6 + 8));
        if ( v26 >= KiMultiCoreHeteroLowerArchThreshold[v25] && v26 <= KiMultiCoreHeteroUpperArchThreshold[v25] )
        {
          if ( a1 )
          {
            KeAddProcessorAffinityEx(&v71->Count, v21);
            v27 = *(_BYTE *)(a6 + 4 * v23 + 25);
            v28 = v19;
            if ( v19 >= v27 )
              v28 = *(_BYTE *)(a6 + 4 * v23 + 25);
            v19 = v28;
            if ( v15 <= v27 )
              v15 = *(_BYTE *)(a6 + 4 * v23 + 25);
          }
          else
          {
            KeAddProcessorAffinityEx(&v67->Count, v21);
            v29 = *(_BYTE *)(a6 + 4 * v23 + 24);
            v30 = v17;
            if ( v17 >= v29 )
              v30 = *(_BYTE *)(a6 + 4 * v23 + 24);
            v17 = v30;
            v31 = v18;
            if ( v18 <= v29 )
              v31 = *(_BYTE *)(a6 + 4 * v23 + 24);
            v18 = v31;
          }
        }
        v20 = v59;
      }
      v58 = ++v21;
    }
    while ( v21 < (unsigned int)KeNumberProcessors_0 );
    v13 = v70;
    v16 = a6;
    v14 = v71;
  }
  if ( a1 )
  {
    if ( (unsigned int)KeIsEmptyAffinityEx(&v14->Count) )
    {
      KiCopyAffinityEx(v14, v14->Size, &v74);
      v61 = v74.Bitmap[0];
      v62 = 0;
      v60 = &v74;
      v40 = KeEnumerateNextProcessor(&v58, (unsigned __int16 **)&v60);
      v41 = v59;
      while ( !v40 )
      {
        v42 = v15;
        v15 = *(_BYTE *)(v16 + 4LL * (a5 + v41 * v58) + 25);
        v43 = v19;
        if ( v19 >= v15 )
          v43 = *(_BYTE *)(v16 + 4LL * (a5 + v41 * v58) + 25);
        v19 = v43;
        if ( v42 > v15 )
          v15 = v42;
        v40 = KeEnumerateNextProcessor(&v58, (unsigned __int16 **)&v60);
      }
    }
    else
    {
      v41 = v59;
    }
    v61 = v14->Bitmap[0];
    v62 = 0;
    v60 = v14;
    if ( !(unsigned int)KeEnumerateNextProcessor(&v58, (unsigned __int16 **)&v60) )
    {
      v44 = v68;
      do
      {
        v45 = v58;
        v46 = 4LL * (a5 + v41 * v58);
        if ( v19 == v15 || *(_BYTE *)(v46 + v16 + 25) > v19 )
          KeAddProcessorAffinityEx(&v72->Count, v58);
        if ( *(_BYTE *)(v46 + v16 + 25) == v15 )
          KeAddProcessorAffinityEx(&v73->Count, v45);
        if ( !a7 && *(_BYTE *)(v46 + v16 + 25) == v19 )
        {
          KeAddProcessorAffinityEx(&v44->Count, v45);
          KeAddProcessorAffinityEx(&v69->Count, v45);
        }
      }
      while ( !(unsigned int)KeEnumerateNextProcessor(&v58, (unsigned __int16 **)&v60) );
LABEL_63:
      v13 = v70;
    }
    v32 = v67;
  }
  else
  {
    v32 = v67;
    if ( (unsigned int)KeIsEmptyAffinityEx(&v67->Count) )
    {
      KiCopyAffinityEx(v67, v67->Size, &v74);
      v61 = v74.Bitmap[0];
      v62 = 0;
      v60 = &v74;
      if ( !(unsigned int)KeEnumerateNextProcessor(&v58, (unsigned __int16 **)&v60) )
      {
        v33 = v59;
        do
        {
          v34 = v18;
          v18 = *(_BYTE *)(v16 + 4LL * (a5 + v33 * v58) + 24);
          v35 = v17;
          if ( v17 >= v18 )
            v35 = *(_BYTE *)(v16 + 4LL * (a5 + v33 * v58) + 24);
          v17 = v35;
          if ( v34 > v18 )
            v18 = v34;
        }
        while ( !(unsigned int)KeEnumerateNextProcessor(&v58, (unsigned __int16 **)&v60) );
      }
    }
    v61 = v32->Bitmap[0];
    v62 = 0;
    v60 = v32;
    if ( !(unsigned int)KeEnumerateNextProcessor(&v58, (unsigned __int16 **)&v60) )
    {
      v36 = v68;
      p_Count = &v69->Count;
      while ( 1 )
      {
        v38 = v58;
        v39 = a5 + v59 * v58;
        if ( a7 )
        {
          if ( v17 == v18 || *(_BYTE *)(v16 + 4 * v39 + 24) > v17 )
            KeAddProcessorAffinityEx(&v36->Count, v58);
          if ( *(_BYTE *)(v16 + 4 * v39 + 24) != v18 )
            goto LABEL_40;
        }
        else
        {
          KeAddProcessorAffinityEx(&v36->Count, v58);
        }
        KeAddProcessorAffinityEx(p_Count, v38);
LABEL_40:
        if ( (unsigned int)KeEnumerateNextProcessor(&v58, (unsigned __int16 **)&v60) )
          goto LABEL_63;
      }
    }
  }
  v47 = v65;
  v48 = v66;
  switch ( KiDynamicHeteroCpuPolicy[2 * v65 + v66] )
  {
    case 1:
      v53 = v72;
      goto LABEL_74;
    case 2:
      v53 = v71;
LABEL_74:
      v54 = (struct _KAFFINITY_EX *)(v13 + 264 * (v66 + 2 * (v65 + 3LL)));
      KiCopyAffinityEx(v54, v54->Size, v53);
      v55 = (struct _KAFFINITY_EX *)(v13 + 264 * (v48 + 2 * (v47 + 10)));
      KiCopyAffinityEx(v55, v55->Size, v72);
      v52 = v73;
      goto LABEL_75;
    case 3:
      v49 = v68;
      break;
    case 4:
      v49 = v32;
      break;
    default:
      return;
  }
  v50 = (struct _KAFFINITY_EX *)(v13 + 264 * (v66 + 2 * (v65 + 3LL)));
  KiCopyAffinityEx(v50, v50->Size, v49);
  v51 = (struct _KAFFINITY_EX *)(v13 + 264 * (v48 + 2 * (v47 + 10)));
  KiCopyAffinityEx(v51, v51->Size, v68);
  v52 = v69;
LABEL_75:
  v56 = (struct _KAFFINITY_EX *)(v13 + 264 * (v48 + 2 * (v47 + 17)));
  KiCopyAffinityEx(v56, v56->Size, v52);
}
