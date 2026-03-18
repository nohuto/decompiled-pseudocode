/*
 * XREFs of ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x140188004
 * Callers:
 *     DxgkEscape @ 0x14041D630 (DxgkEscape.c)
 * Callees:
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x140038794 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     DxgkpIsDrtEnabled @ 0x140188BF0 (DxgkpIsDrtEnabled.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x14028A734 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x14030A940 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?DxgEscapeEvictWorker@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@PEAVDXGPROCESS@@@Z @ 0x140405A98 (-DxgEscapeEvictWorker@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@PEAVDXGPROCESS@@@Z.c)
 */

int __fastcall DxgEscapeEvict(struct _D3DKMT_VIDMM_ESCAPE *a1)
{
  HANDLE hProcess; // rax
  int v3; // eax
  int v4; // edi
  struct DXGPROCESS *Process; // rax
  int result; // eax
  struct DXGPROCESS *Current; // rax
  _BYTE v8[8]; // [rsp+20h] [rbp-68h] BYREF
  HANDLE v9; // [rsp+28h] [rbp-60h]
  __int64 v10; // [rsp+30h] [rbp-58h]
  int v11; // [rsp+38h] [rbp-50h]
  __int16 v12; // [rsp+3Ch] [rbp-4Ch]
  char v13; // [rsp+3Eh] [rbp-4Ah]

  if ( a1->GetVads.GetVad.VadAddress )
  {
    if ( (unsigned __int8)DxgkpIsDrtEnabled() )
    {
      hProcess = a1->Evict.hProcess;
      v10 = 0LL;
      v12 = 0;
      v9 = hProcess;
      v11 = 2048;
      v13 = 0;
      v3 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v8, 1);
      v4 = v3;
      if ( v3 >= 0 )
      {
        Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v8);
        v4 = DxgEscapeEvictWorker(a1, Process);
      }
      else
      {
        WdLogSingleEntry2(3LL, a1->GetVads.GetVad.VadAddress, v3);
        WdLogGlobalForLineNumber = 376;
      }
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v8);
      return v4;
    }
    else
    {
      WdLogSingleEntry1(3LL, -1073741823LL);
      result = -1073741823;
      WdLogGlobalForLineNumber = 384;
    }
  }
  else
  {
    Current = DXGPROCESS::GetCurrent();
    return DxgEscapeEvictWorker(a1, Current);
  }
  return result;
}
