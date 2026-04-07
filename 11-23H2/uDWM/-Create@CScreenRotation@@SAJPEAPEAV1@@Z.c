/*
 * XREFs of ?Create@CScreenRotation@@SAJPEAPEAV1@@Z @ 0x1800F6E0C
 * Callers:
 *     ?HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z @ 0x18010A4E0 (-HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CScreenRotation@@IEAA@XZ @ 0x1800F6DAC (--0CScreenRotation@@IEAA@XZ.c)
 */

__int64 __fastcall CScreenRotation::Create(struct CScreenRotation **a1)
{
  int v2; // ebx
  CScreenRotation *v3; // rax
  CScreenRotation *v4; // rax
  struct CScreenRotation *v5; // rdi

  if ( !a1 )
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x19u);
    return (unsigned int)v2;
  }
  v3 = (CScreenRotation *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                            WPF::g_pProcessHeap,
                            408LL);
  if ( v3 )
  {
    v4 = CScreenRotation::CScreenRotation(v3);
    v5 = v4;
    if ( v4 )
    {
      v2 = (*(__int64 (__fastcall **)(CScreenRotation *))(*(_QWORD *)v4 + 8LL))(v4);
      if ( v2 >= 0 )
      {
        *a1 = v5;
        return 0;
      }
      goto LABEL_9;
    }
  }
  else
  {
    v5 = 0LL;
  }
  v2 = -2147024882;
LABEL_9:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x19u);
  *a1 = 0LL;
  if ( v5 )
    CBaseObject::Release(v5);
  return (unsigned int)v2;
}
