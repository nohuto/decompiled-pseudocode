/*
 * XREFs of ?Initialize@CTTMDEVICE@@QEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPEBG@Z @ 0x1403DB8FC
 * Callers:
 *     ?CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPEBGPEAPEAX@Z @ 0x1403DB6A8 (-CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPE.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

__int64 __fastcall CTTMDEVICE::Initialize(
        CTTMDEVICE *this,
        struct _DEVICE_OBJECT *a2,
        struct DXGADAPTER *a3,
        unsigned int a4,
        unsigned int a5,
        wchar_t *Src)
{
  wchar_t *v6; // rbx
  __int64 v9; // r14
  _WORD *v10; // rax
  unsigned __int64 i; // rcx
  unsigned int v12; // esi
  __int16 v13; // dx

  v6 = (wchar_t *)((char *)this + 88);
  *((_QWORD *)this + 8) = a3;
  *((_QWORD *)this + 9) = a2;
  v9 = a4;
  *((_DWORD *)this + 20) = a4;
  *((_DWORD *)this + 21) = a5;
  memset((char *)this + 88, 0, 0x208uLL);
  *((_DWORD *)this + 152) = 34078720;
  *((_QWORD *)this + 77) = v6;
  wcscpy_s(v6, 0x104uLL, Src);
  v10 = (_WORD *)*((_QWORD *)this + 77);
  if ( !v10 )
  {
    v12 = -1073741811;
LABEL_11:
    WdLogSingleEntry4(2LL, a3, v9, (int)v12, 1LL);
    WdLogGlobalForLineNumber = 6384;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to get monitor CCD name length on adapter 0x%I64x target 0x%I64x (Status = 0x%I64x).",
      (__int64)a3,
      v9,
      (int)v12,
      1LL,
      0LL);
    return v12;
  }
  for ( i = (unsigned __int64)*((unsigned __int16 *)this + 305) >> 1; i; --i )
  {
    if ( !*v10 )
      break;
    ++v10;
  }
  v12 = i == 0 ? 0xC000000D : 0;
  if ( i )
    v13 = (*((_WORD *)this + 305) >> 1) - i;
  else
    v13 = 0;
  if ( !i )
    goto LABEL_11;
  *((_WORD *)this + 304) = 2 * v13;
  return v12;
}
