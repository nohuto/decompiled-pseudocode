/*
 * XREFs of ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x140036EB0
 * Callers:
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x14004E398 (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_DDid @ 0x140036F9C (WPP_IFR_SF_DDid.c)
 */

__int64 __fastcall FxCalculateObjectTotalSize2(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int16 RawObjectSize,
        unsigned __int16 ExtraSize,
        unsigned __int64 ContextSize,
        unsigned __int64 *Total)
{
  unsigned int level; // esi
  unsigned __int64 v7; // r8
  unsigned int globals; // ebp
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rdx
  unsigned int id; // ebx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  bool v15; // cf
  const _GUID *v17; // [rsp+20h] [rbp-38h]

  level = ExtraSize;
  v7 = -1LL;
  globals = RawObjectSize;
  v9 = ((unsigned __int16)(level + 15) & 0xFFF0) + (unsigned __int64)((unsigned __int16)(RawObjectSize + 15) & 0xFFF0);
  v10 = v9 + 48;
  if ( v9 + 48 < v9 )
  {
    *Total = -1LL;
    id = -1073741675;
    goto LABEL_13;
  }
  id = 0;
  *Total = v10;
  if ( !ContextSize )
    goto LABEL_7;
  v12 = (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v12 >= ContextSize )
  {
    v13 = v10 + v12;
    v14 = -1LL;
    v15 = v13 < v10;
    if ( v13 >= v10 )
      v14 = v13;
    *Total = v14;
    v10 = v14;
    id = v15 ? 0xC0000095 : 0;
    if ( !v15 )
    {
LABEL_7:
      if ( !FxDriverGlobals->FxVerifierHandle )
        return id;
      if ( v10 + 48 >= v10 )
        v7 = v10 + 48;
      id = v10 + 48 < v10 ? 0xC0000095 : 0;
      *Total = v7;
      if ( v10 + 48 >= v10 )
        return id;
    }
LABEL_13:
    WPP_IFR_SF_DDid(FxDriverGlobals, v10, v7, ContextSize, v17, globals, level, ContextSize, id);
    return id;
  }
  return 3221225621LL;
}
