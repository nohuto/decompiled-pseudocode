/*
 * XREFs of ?clear@?$forward_list@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1800286F0
 * Callers:
 *     ?RemoveDuckingManagerGainStage@CAudioSession@@UEAAJPEAUIDuckingController@@_NPEA_J@Z @ 0x1800282D0 (-RemoveDuckingManagerGainStage@CAudioSession@@UEAAJPEAUIDuckingController@@_NPEA_J@Z.c)
 *     ??1CAudioSession@@MEAA@XZ @ 0x1800283D0 (--1CAudioSession@@MEAA@XZ.c)
 *     ?ResetPolicyGainStages@CAudioSession@@AEAAXXZ @ 0x18002888C (-ResetPolicyGainStages@CAudioSession@@AEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800A0A00 (--1-$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall std::forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::clear(
        char **a1)
{
  char *v1; // rdi
  char *v2; // rbx

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    do
    {
      v2 = *(char **)v1;
      wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>::~com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>(v1 + 8);
      std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)0x10);
      v1 = v2;
    }
    while ( v2 );
  }
}
