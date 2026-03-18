/*
 * XREFs of ?bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1400FF0B8
 * Callers:
 *     ?bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1400FEE08 (-bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_E.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?cCapString@@YAJPEAGPEBGH@Z @ 0x1400B94E0 (-cCapString@@YAJPEAGPEBGH@Z.c)
 *     ?lfOrientation@IFIOBJ@@QEAAJXZ @ 0x1400FA64C (-lfOrientation@IFIOBJ@@QEAAJXZ.c)
 *     ?dpNtmi@PFEOBJ@@QEAAKXZ @ 0x1400FAF48 (-dpNtmi@PFEOBJ@@QEAAKXZ.c)
 *     IsAnyCharsetDbcs @ 0x1400FF574 (IsAnyCharsetDbcs.c)
 *     ?bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z @ 0x1400FF5D0 (-bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall PFEMEMOBJ::bInit(
        PFEMEMOBJ *this,
        struct PFF *a2,
        int a3,
        struct _FD_GLYPHSET *a4,
        unsigned __int64 a5,
        struct _IFIMETRICS *a6,
        unsigned __int64 a7,
        int a8,
        struct _UNIVERSAL_FONT_ID *a9,
        int a10)
{
  __int64 v12; // r12
  __int64 v13; // r10
  __int64 v14; // rax
  _WORD *v15; // rcx
  const wchar_t *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r15
  int v21; // eax
  __int64 v22; // rbp
  int v23; // eax
  __int64 v24; // rdx
  int v25; // ebx
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rsi
  unsigned __int16 *i; // rcx
  int v30; // ecx
  int v31; // ecx
  unsigned int CurrentProcessId; // eax
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v36; // [rsp+28h] [rbp-C0h] BYREF
  _OWORD v37[2]; // [rsp+38h] [rbp-B0h] BYREF
  unsigned __int16 v38[32]; // [rsp+60h] [rbp-88h] BYREF
  char v39; // [rsp+A1h] [rbp-47h] BYREF

  if ( a6->fwdWinAscender + a6->fwdWinDescender == 0 || a6->fwdUnitsPerEm == 0 )
    return 0LL;
  **(_QWORD **)this = a2;
  *(_DWORD *)(*(_QWORD *)this + 8LL) = a3;
  *(_QWORD *)(*(_QWORD *)this + 16LL) = a4;
  *(_QWORD *)(*(_QWORD *)this + 24LL) = a5;
  *(_QWORD *)(*(_QWORD *)this + 32LL) = a6;
  *(_QWORD *)(*(_QWORD *)this + 40LL) = a7;
  *(_QWORD *)(*(_QWORD *)this + 48LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 56LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 64LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 12LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 92LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 96LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 136LL) = 0;
  v12 = *(_QWORD *)(*(_QWORD *)this + 32LL);
  v36 = v12;
  if ( (unsigned int)IsAnyCharsetDbcs(v12) )
  {
    *(_DWORD *)(v13 + 12) |= 0x80u;
    v13 = *(_QWORD *)this;
  }
  if ( *(_WORD *)(*(int *)(v12 + 8) + v12) == 64 )
    *(_DWORD *)(v13 + 12) |= 0x100u;
  *(_DWORD *)(*(_QWORD *)this + 128LL) = (PFEOBJ::dpNtmi(this) + 119) & 0xFFFFFFFC;
  if ( (a6->flInfo & 0x4000) != 0 && a6->cjIfiExtra > 0x10 )
    *(_DWORD *)(*(_QWORD *)this + 128LL) += 40 * *(ULONG *)((char *)&a6->cjIfiExtra + a6[1].dpwszFaceName);
  if ( a8 )
  {
    *(_DWORD *)(*(_QWORD *)this + 12LL) |= 1u;
  }
  else
  {
    v14 = *((_QWORD *)a2 + 26);
    if ( v14 && !*(_QWORD *)(*(_QWORD *)v14 + 80LL) )
    {
      v30 = *(_DWORD *)(*(_QWORD *)this + 12LL);
      if ( (*((_DWORD *)a2 + 13) & 0x10) != 0 )
        v31 = v30 | 0x40;
      else
        v31 = v30 | 4;
      *(_DWORD *)(*(_QWORD *)this + 12LL) = v31;
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      v33 = *(_QWORD *)this;
      *(_DWORD *)(v33 + 92) = CurrentProcessId & 0xFFFFFFFC;
      *(_QWORD *)(*(_QWORD *)this + 96LL) = GreGetCurrentThread(v33, v34);
    }
  }
  if ( a9 )
    *(_DWORD *)(*(_QWORD *)this + 12LL) |= 0x20u;
  if ( a10 )
    *(_DWORD *)(*(_QWORD *)this + 12LL) |= 8u;
  v15 = (_WORD *)(v12 + *(int *)(v12 + 16));
  v16 = v15 + 1;
  if ( *v15 != 64 )
    v16 = (const wchar_t *)(v12 + *(int *)(v12 + 16));
  if ( !_wcsicmp(v16, L"SYSTEM")
    || !_wcsicmp(v16, L"FIXEDSYS")
    || !_wcsicmp(v16, L"TERMINAL")
    || !_wcsicmp(v16, L"SMALL FONTS") && *(_BYTE *)(v12 + 44) == 0x80 )
  {
    *(_DWORD *)(*(_QWORD *)this + 12LL) |= 0x10u;
  }
  *(_QWORD *)(*(_QWORD *)this + 112LL) = 0LL;
  *(_WORD *)(*(_QWORD *)this + 104LL) = 1;
  *(_WORD *)(*(_QWORD *)this + 106LL) = 0;
  v20 = *(_QWORD *)(W32GetSessionState(v18, v17, v19) + 96);
  *(_DWORD *)(*(_QWORD *)this + 80LL) = _InterlockedIncrement((volatile signed __int32 *)(v20 + 20388));
  v21 = IFIOBJ::lfOrientation((IFIOBJ *)&v36);
  v22 = v36;
  *(_DWORD *)(*(_QWORD *)this + 68LL) = v21;
  if ( *(_DWORD *)(v22 + 4) < 4u )
    goto LABEL_22;
  v23 = *(_DWORD *)(v22 + 192);
  if ( v23 )
  {
    *(_DWORD *)(*(_QWORD *)this + 88LL) = v23;
    *(_DWORD *)(*(_QWORD *)this + 84LL) = 1;
  }
  else
  {
LABEL_22:
    *(_DWORD *)(*(_QWORD *)this + 84LL) = *((_DWORD *)a2 + 36);
    *(_DWORD *)(*(_QWORD *)this + 88LL) = a3;
    if ( a9 )
      *(_DWORD *)(*(_QWORD *)this + 88LL) += (*((_DWORD *)a9 + 1) - 1) & 0xFFFFFFFE;
  }
  v24 = *(_QWORD *)this;
  memset(v37, 0, sizeof(v37));
  PushThreadGuardedObject(v37, v24, vDeletePFE);
  v25 = bComputeGISET(a6, *(struct PFE **)this, (struct _GISET **)(*(_QWORD *)this + 72LL));
  PopThreadGuardedObject(v37);
  if ( !v25 )
    return 0LL;
  *(_DWORD *)(*(_QWORD *)this + 132LL) = 0;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 32LL) + 40LL) )
  {
    v26 = *(_QWORD *)(v20 + 19680);
    v27 = v26 + 196LL * *(unsigned int *)(v20 + 19696);
    cCapString(v38, (WCHAR *)(v22 + *(int *)(v12 + 8)), 32);
    while ( v26 < v27 )
    {
      if ( !(*(_BYTE *)(v26 + 129) | *(_BYTE *)(v26 + 195)) )
      {
        for ( i = v38; *i == *(unsigned __int16 *)((char *)i + v26 - (_QWORD)&v39 + 195); ++i )
        {
          if ( !*i )
          {
            *(_BYTE *)((unsigned int)(*(_DWORD *)(*(_QWORD *)this + 132LL))++ + *(_QWORD *)this + 140LL) = -47 * ((__int64)(v26 - *(_QWORD *)(v20 + 19680)) >> 2);
            break;
          }
        }
      }
      v26 += 196LL;
    }
  }
  return 1LL;
}
