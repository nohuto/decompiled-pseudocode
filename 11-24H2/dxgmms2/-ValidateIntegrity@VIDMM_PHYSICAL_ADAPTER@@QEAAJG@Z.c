/*
 * XREFs of ?ValidateIntegrity@VIDMM_PHYSICAL_ADAPTER@@QEAAJG@Z @ 0x140090D54
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400E2548 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDMM_PHYSICAL_ADAPTER::ValidateIntegrity(VIDMM_PHYSICAL_ADAPTER *this, __int64 a2)
{
  __int64 v3; // r8
  unsigned __int16 i; // bx
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rcx

  v3 = 0LL;
  if ( (_WORD)a2 == 0xFFFF )
  {
    for ( i = 0; (unsigned int)i < *((_DWORD *)this + 16); ++i )
    {
      v5 = *(_QWORD *)(*((_QWORD *)this + 206) + 8LL * i);
      result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v5 + 192LL))(v5, a2, v3);
      v3 = (unsigned int)result;
      if ( (int)result < 0 )
        return result;
    }
    return (unsigned int)v3;
  }
  if ( (unsigned int)(unsigned __int16)a2 >= *((_DWORD *)this + 16) )
    return 3221225485LL;
  v7 = *(_QWORD *)(*((_QWORD *)this + 206) + 8LL * (unsigned __int16)a2);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 192LL))(v7);
  LODWORD(v3) = result;
  if ( (int)result >= 0 )
    return (unsigned int)v3;
  return result;
}
