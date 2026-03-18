/*
 * XREFs of ?bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C003D250
 * Callers:
 *     bDeleteRegion @ 0x1C003DA20 (bDeleteRegion.c)
 *     GreDeleteObject @ 0x1C00472A0 (GreDeleteObject.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C008AFB0 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     bDeleteBrush @ 0x1C00C64F0 (bDeleteBrush.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0044030 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C0046EB0 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     EtwTraceGdiTransformHandle @ 0x1C0060CBC (EtwTraceGdiTransformHandle.c)
 *     McTemplateK0ppqqq_EtwWriteTransfer @ 0x1C00DF872 (McTemplateK0ppqqq_EtwWriteTransfer.c)
 *     ?_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z @ 0x1C0235F80 (-_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z.c)
 */

__int64 __fastcall bPEBCacheHandle(__int64 a1, _DWORD *a2, _DWORD *a3, __int64 a4, __int64 a5)
{
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v7; // rcx
  _QWORD *v8; // r13
  __int64 v9; // rdx
  GdiHandleManager *v10; // r15
  unsigned int v11; // ebx
  __int64 v12; // r14
  unsigned int v13; // r12d
  unsigned int v14; // edi
  __int64 v15; // rcx
  struct OBJECT *v16; // r9
  unsigned int v17; // ebx
  unsigned int v18; // r10d
  __int64 v19; // r8
  unsigned int v20; // ecx
  char v21; // al
  __int64 v22; // rsi
  __int64 v23; // rcx
  struct OBJECT *v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  unsigned int v27; // ebx
  __int64 v28; // rdx
  __int64 v29; // rcx
  char v30; // di
  __int64 v31; // r8
  __int64 *v32; // r9
  __int64 v33; // rsi
  __int64 ProcessPeb; // rax
  __int64 v35; // rdi
  __int64 v36; // r8
  __int64 v37; // rdx
  _QWORD *v38; // rcx
  _QWORD *v39; // rdx
  struct OBJECT *v40; // r15
  __int64 v41; // rcx
  __int64 v42; // r14
  __int64 v43; // rsi
  unsigned int v44; // ebx
  __int64 v45; // rcx
  unsigned int v46; // r8d
  unsigned int v47; // edx
  __int64 v48; // r9
  _DWORD *v49; // rax
  unsigned int v50; // ebx
  __int64 v51; // rcx
  unsigned int v52; // r8d
  unsigned int v53; // edx
  _QWORD *v54; // r9
  struct _ENTRY *Entry; // rax
  struct _ENTRY *v57; // rax
  int v58; // ecx
  unsigned int v59; // eax
  struct _ENTRY *v60; // rax
  struct _ENTRY *v61; // rax
  _DWORD *v62; // rax
  int v63; // edx
  int v64; // r8d
  unsigned int EtwGdiHandleType; // eax
  __int64 v66; // r11
  signed __int32 v67[8]; // [rsp+0h] [rbp-108h] BYREF
  struct OBJECT *v68; // [rsp+40h] [rbp-C8h]
  unsigned int v69; // [rsp+48h] [rbp-C0h]
  unsigned int v70; // [rsp+50h] [rbp-B8h]
  unsigned int v71; // [rsp+58h] [rbp-B0h]
  _DWORD *v72; // [rsp+60h] [rbp-A8h]
  _QWORD *v73; // [rsp+68h] [rbp-A0h]
  int v74; // [rsp+70h] [rbp-98h]
  _QWORD *v75; // [rsp+78h] [rbp-90h]
  struct OBJECT *v76; // [rsp+80h] [rbp-88h]
  GdiHandleManager **v77; // [rsp+88h] [rbp-80h]
  struct _NT_TIB *Self; // [rsp+90h] [rbp-78h]
  __int64 v79; // [rsp+98h] [rbp-70h]
  __int64 v80; // [rsp+A0h] [rbp-68h]
  _QWORD *v81; // [rsp+A8h] [rbp-60h]
  __int64 v82; // [rsp+B0h] [rbp-58h]
  __int64 v83; // [rsp+B8h] [rbp-50h]
  _QWORD *v84; // [rsp+C0h] [rbp-48h]
  int v85; // [rsp+110h] [rbp+8h]
  unsigned int v87; // [rsp+120h] [rbp+18h]

  v85 = a1;
  v69 = 0;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(a1);
  v8 = CurrentProcessWin32Process;
  v73 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
  {
    v8 = 0LL;
    v73 = 0LL;
  }
  v77 = (GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(v7) + 24) + 8008LL);
  v10 = *v77;
  v11 = *a3 & 0xFFFFFF;
  if ( v11 >= 0x10000 )
  {
    if ( *(_DWORD *)v10 > 0x10000u )
    {
      Entry = GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v10 + 2), (unsigned __int16)v11, 1);
      v9 = HIWORD(v11);
      if ( *((unsigned __int8 *)Entry + 13) == (_DWORD)v9 )
        v11 = (unsigned __int16)v11;
    }
    else
    {
      v11 = (unsigned __int16)v11;
    }
  }
  v12 = *((_QWORD *)v10 + 2);
  v13 = *(_DWORD *)(v12 + 2056);
  v14 = v13 + ((*(unsigned __int16 *)(v12 + 2) + 0xFFFF) << 16);
  if ( v11 >= v14 )
    goto LABEL_102;
  if ( v11 >= v13 )
    v15 = ((v11 - v13) >> 16) + 1;
  else
    v15 = 0LL;
  v9 = *(_QWORD *)(v12 + 8 * v15 + 8);
  if ( (_DWORD)v15 )
    v11 += ((1 - (_DWORD)v15) << 16) - v13;
  if ( v11 >= *(_DWORD *)(v9 + 20) )
  {
LABEL_102:
    v16 = 0LL;
  }
  else
  {
    v9 = **(_QWORD **)(v9 + 24);
    v16 = *(struct OBJECT **)(*(_QWORD *)(v9 + 8LL * (v11 >> 8)) + 16LL * (unsigned __int8)v11 + 8);
  }
  v68 = v16;
  v76 = v16;
  v72 = *(_DWORD **)v16;
  v17 = (unsigned __int16)v72 | ((unsigned int)v72 >> 8) & 0xFF0000;
  if ( v17 < 0x10000 )
  {
    v18 = (unsigned __int16)v72 | ((unsigned int)v72 >> 8) & 0xFF0000;
    v87 = v18;
  }
  else
  {
    v18 = (unsigned __int16)v72;
    v87 = (unsigned __int16)v72;
    if ( *(_DWORD *)v10 > 0x10000u )
    {
      v57 = GdiHandleEntryDirectory::GetEntry((GdiHandleEntryDirectory *)v12, (unsigned __int16)v72, 1);
      v9 = HIWORD(v17);
      v58 = *((unsigned __int8 *)v57 + 13);
      v59 = (unsigned __int16)v72 | ((unsigned int)v72 >> 8) & 0xFF0000;
      if ( v58 == (_DWORD)v9 )
        v59 = (unsigned __int16)v72;
      v18 = v59;
      v87 = v59;
      v16 = v68;
    }
  }
  if ( v17 >= 0x10000 )
  {
    if ( *(_DWORD *)v10 > 0x10000u )
    {
      v60 = GdiHandleEntryDirectory::GetEntry((GdiHandleEntryDirectory *)v12, (unsigned __int16)v72, 1);
      v9 = HIWORD(v17);
      if ( *((unsigned __int8 *)v60 + 13) == (_DWORD)v9 )
        v17 = (unsigned __int16)v72;
      v18 = v87;
      v16 = v68;
    }
    else
    {
      v17 = (unsigned __int16)v72;
    }
  }
  v19 = 0LL;
  v20 = 0;
  if ( v17 >= v14 )
  {
    v21 = 0;
  }
  else
  {
    if ( v17 >= v13 )
      v9 = ((v17 - v13) >> 16) + 1;
    else
      v9 = 0LL;
    v19 = *(_QWORD *)(v12 + 8 * v9 + 8);
    if ( (_DWORD)v9 )
      v20 = v17 + ((1 - (_DWORD)v9) << 16) - v13;
    else
      v20 = v17;
    v21 = 1;
  }
  v22 = 0LL;
  if ( v21 )
  {
    if ( v20 >= *(_DWORD *)(v19 + 20) )
      v9 = 0LL;
    else
      v9 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v19 + 24) + 8LL * (v20 >> 8)) + 16LL * (unsigned __int8)v20 + 8);
    if ( v9 )
      v22 = *(_QWORD *)v19 + 24LL * v20;
    v16 = v68;
  }
  if ( v17 >= 0x10000 )
  {
    if ( *(_DWORD *)v10 > 0x10000u )
    {
      v61 = GdiHandleEntryDirectory::GetEntry((GdiHandleEntryDirectory *)v12, (unsigned __int16)v17, 1);
      v9 = HIWORD(v17);
      if ( *((unsigned __int8 *)v61 + 13) == (_DWORD)v9 )
        v17 = (unsigned __int16)v72;
      v18 = v87;
      v16 = v68;
    }
    else
    {
      v17 = (unsigned __int16)v72;
    }
    v8 = v73;
  }
  if ( v17 >= v14 )
    goto LABEL_119;
  if ( v17 >= v13 )
    v23 = ((v17 - v13) >> 16) + 1;
  else
    v23 = 0LL;
  v19 = *(_QWORD *)(v12 + 8 * v23 + 8);
  if ( (_DWORD)v23 )
    v17 += ((1 - (_DWORD)v23) << 16) - v13;
  if ( v17 >= *(_DWORD *)(v19 + 20) )
  {
LABEL_119:
    v24 = 0LL;
  }
  else
  {
    v19 = *(_QWORD *)(v19 + 24);
    v9 = 2LL * (unsigned __int8)v17;
    v24 = *(struct OBJECT **)(*(_QWORD *)(*(_QWORD *)v19 + 8LL * (v17 >> 8)) + 16LL * (unsigned __int8)v17 + 8);
  }
  if ( v24 != v16 )
    v22 = 0LL;
  if ( v18 >= 0x10000 || *(_DWORD *)v10 > 0x10000u )
  {
    EtwGdiHandleType = GetEtwGdiHandleType(*(unsigned __int8 *)(v22 + 14), v9, v19, *(_DWORD *)(v22 + 8) & 0xFFFFFFFE);
    EtwTraceGdiTransformHandle(v66, v66, EtwGdiHandleType);
  }
  else
  {
    ++*(_BYTE *)(v22 + 13);
    v25 = v18 | ((unsigned __int64)*(unsigned __int16 *)(v22 + 12) << 16);
    *(_QWORD *)v16 = v25;
    v26 = *(_QWORD *)v22 & 0xFFFFFFFFFF000000uLL | (unsigned __int16)v25 | (unsigned __int64)(((unsigned int)v25 >> 8) & 0xFF0000);
    *(_QWORD *)v22 = v26;
    v27 = *(_DWORD *)(v22 + 8) & 0xFFFFFFFE;
    v30 = GetEtwGdiHandleType(*(unsigned __int8 *)(v22 + 14), v26, v19, v16);
    v33 = *v32;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x40000000000LL) != 0 )
    {
      v62 = (_DWORD *)SGDGetUserSessionState(v29, v28, v31, v32);
      McTemplateK0ppqqq_EtwWriteTransfer(*v62, v63, v64, (_DWORD)v72, v33, v30, *v62, v27);
    }
  }
  ProcessPeb = PsGetProcessPeb(*v8);
  v35 = ProcessPeb;
  if ( ProcessPeb )
  {
    v74 = 0;
    if ( *(_QWORD *)(ProcessPeb + 320)
      || (Self = KeGetPcr()->NtTib.Self,
          _InterlockedCompareExchange64((volatile signed __int64 *)(ProcessPeb + 320), (signed __int64)Self, 0LL)) )
    {
      v40 = v68;
    }
    else
    {
      v74 = 1;
      v36 = ProcessPeb + 4LL * v85;
      v37 = (unsigned int)dword_1C0254808[v85];
      if ( *(_DWORD *)(v36 + 328) < (unsigned int)v37 )
      {
        v38 = (_QWORD *)(ProcessPeb + 8 * ((unsigned int)dword_1C02547F8[v85] + 43LL));
        v75 = v38;
        v39 = &v38[v37];
        while ( 1 )
        {
          if ( v38 == v39 )
            goto LABEL_92;
          if ( !*v38 )
            break;
          v75 = ++v38;
        }
        v40 = v68;
        *v38 = *(_QWORD *)v68;
        ++*(_DWORD *)(v36 + 328);
        *a2 &= 0xFFFFFFF5;
        *a2 |= 1u;
        _InterlockedOr(v67, 0);
        v69 = 1;
        v41 = *(_QWORD *)(SGDGetSessionState(a2) + 24);
        v42 = *(_QWORD *)(v41 + 8008);
        v68 = (struct OBJECT *)v42;
        v43 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v41) + 24) + 8008LL);
        v79 = v43;
        v44 = **(_DWORD **)a4 & 0xFFFFFF;
        v70 = v44;
        if ( v44 >= 0x10000 )
        {
          if ( *(_DWORD *)v43 <= 0x10000u )
          {
            v44 = (unsigned __int16)v44;
            v70 = (unsigned __int16)v44;
            goto LABEL_55;
          }
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *(GdiHandleEntryDirectory **)(v43 + 16),
                                      (unsigned __int16)v44,
                                      1)
               + 13) == HIWORD(v44) )
            v44 = (unsigned __int16)v44;
        }
        v70 = v44;
LABEL_55:
        v45 = *(_QWORD *)(v43 + 16);
        v80 = v45;
        v46 = *(_DWORD *)(v45 + 2056);
        if ( v44 >= v46 + ((*(unsigned __int16 *)(v45 + 2) + 0xFFFF) << 16) )
        {
          v49 = 0LL;
        }
        else
        {
          if ( v44 >= v46 )
            v47 = ((v44 - v46) >> 16) + 1;
          else
            v47 = 0;
          v48 = *(_QWORD *)(v45 + 8LL * v47 + 8);
          if ( v47 )
            v44 += ((1 - v47) << 16) - v46;
          if ( v44 >= *(_DWORD *)(v48 + 20) )
          {
            v49 = 0LL;
          }
          else
          {
            v81 = *(_QWORD **)(v48 + 24);
            v49 = *(_DWORD **)(*(_QWORD *)(*v81 + 8LL * (v44 >> 8)) + 16LL * (unsigned __int8)v44 + 8);
          }
          v73 = v49;
        }
        v72 = v49;
        v50 = (unsigned __int16)*v49 | (*v49 >> 8) & 0xFF0000;
        if ( v50 >= 0x10000 )
        {
          if ( *(_DWORD *)v42 > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *(GdiHandleEntryDirectory **)(v42 + 16),
                                        (unsigned __int16)*v49,
                                        1)
                 + 13) == HIWORD(v50) )
              v50 = (unsigned __int16)v50;
          }
          else
          {
            v50 = (unsigned __int16)*v49;
          }
        }
        v71 = v50;
        if ( v50 >= 0x10000 )
        {
          if ( *(_DWORD *)v42 <= 0x10000u )
          {
            v71 = (unsigned __int16)v50;
            goto LABEL_68;
          }
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *(GdiHandleEntryDirectory **)(v42 + 16),
                                      (unsigned __int16)v50,
                                      1)
               + 13) == HIWORD(v50) )
          {
            v71 = (unsigned __int16)v50;
            goto LABEL_68;
          }
        }
        v71 = v50;
LABEL_68:
        v51 = *(_QWORD *)(v42 + 16);
        v82 = v51;
        v52 = *(_DWORD *)(v51 + 2056);
        v83 = v51;
        if ( v50 < v52 + ((*(unsigned __int16 *)(v51 + 2) + 0xFFFF) << 16) )
        {
          if ( v50 >= v52 )
            v53 = ((v50 - v52) >> 16) + 1;
          else
            v53 = 0;
          v54 = *(_QWORD **)(v51 + 8LL * v53 + 8);
          if ( v53 )
            v50 += ((1 - v53) << 16) - v52;
          *(_DWORD *)(*v54 + 24LL * v50 + 8) &= ~1u;
          v84 = (_QWORD *)v54[3];
          ExReleasePushLockExclusiveEx(*(_QWORD *)(*v84 + 8LL * (v50 >> 8)) + 16LL * (unsigned __int8)v50, 0LL);
          KeLeaveCriticalRegion();
        }
        *(_DWORD *)(a4 + 8) = 0;
        *(_QWORD *)a4 = 0LL;
        KeLeaveCriticalRegion();
        if ( a5 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)a5 + 12LL));
          *(_QWORD *)a5 = 0LL;
        }
        goto LABEL_76;
      }
LABEL_92:
      v40 = v68;
LABEL_76:
      *(_QWORD *)(v35 + 320) = 0LL;
    }
  }
  else
  {
    v40 = v68;
  }
  if ( !v69 )
    GdiHandleManager::_IncrementOrDecrementUniqueness(*v77, v40, 0);
  return v69;
}
