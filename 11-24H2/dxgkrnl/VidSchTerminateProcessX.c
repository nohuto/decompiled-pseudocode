/*
 * XREFs of VidSchTerminateProcessX @ 0x1403AE0DC
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x14034D4E0 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

struct DXGGLOBAL *__fastcall VidSchTerminateProcessX(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rbx
  struct DXGGLOBAL *result; // rax
  __int64 v5; // rcx
  __int64 v6; // rsi

  v2 = 0;
  v3 = 272LL;
  do
  {
    result = DXGGLOBAL::GetGlobal();
    if ( *(_QWORD *)((char *)result + v3) )
    {
      result = DXGGLOBAL::GetGlobal();
      v5 = *(_QWORD *)(a1 + 64);
      v6 = *(_QWORD *)((char *)result + v3);
      if ( v5 )
      {
        result = (struct DXGGLOBAL *)(unsigned int)(*(_DWORD *)v6 - 1);
        if ( *(_QWORD *)(v5 + 8LL * (_QWORD)result + 16) )
        {
          (*(void (**)(void))(*(_QWORD *)(v6 + 8) + 88LL))();
          result = *(struct DXGGLOBAL **)(a1 + 64);
          *((_QWORD *)result + (unsigned int)(*(_DWORD *)v6 - 1) + 2) = 0LL;
        }
      }
    }
    ++v2;
    v3 += 8LL;
  }
  while ( v2 < 2 );
  return result;
}
