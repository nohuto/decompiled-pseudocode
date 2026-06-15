/*
 * XREFs of std::forward_list_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy_____::remove_if__lambda_5fdc09f974c9fb8661da7e153f1f57b6___ @ 0x180086434
 * Callers:
 *     ?RemoveDuckingManagerGainStage@CAudioSession@@UEAAJPEAUIDuckingController@@_NPEA_J@Z @ 0x18001E3B0 (-RemoveDuckingManagerGainStage@CAudioSession@@UEAAJPEAUIDuckingController@@_NPEA_J@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800A455C (--1-$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _lambda_5fdc09f974c9fb8661da7e153f1f57b6_::operator() @ 0x1800C2568 (_lambda_5fdc09f974c9fb8661da7e153f1f57b6_--operator().c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::forward_list_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy_____::remove_if__lambda_5fdc09f974c9fb8661da7e153f1f57b6___(
        char **a1,
        __int64 a2)
{
  char **v3; // rdi
  char *v4; // rsi
  char *v5; // rbx
  char *v6; // rcx
  char *v7; // rbx
  char *v8; // [rsp+28h] [rbp-20h] BYREF
  char **v9; // [rsp+30h] [rbp-18h]

  v3 = a1;
  v4 = 0LL;
  v8 = 0LL;
  v9 = &v8;
  v5 = *a1;
  if ( *a1 )
  {
    do
    {
      if ( (unsigned __int8)lambda_5fdc09f974c9fb8661da7e153f1f57b6_::operator()(a2, v5 + 8) )
      {
        v6 = *v3;
        v5 = *(char **)*v3;
        *(_QWORD *)v6 = 0LL;
        *v3 = v5;
        *v9 = v6;
        v9 = (char **)v6;
      }
      else
      {
        v3 = (char **)v5;
        v5 = *(char **)v5;
      }
    }
    while ( v5 );
    v4 = v8;
  }
  if ( v4 )
  {
    do
    {
      v7 = *(char **)v4;
      wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>::~com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>(v4 + 8);
      std::_Deallocate<16,0>(v4, (const struct std::nothrow_t *)0x10);
      v4 = v7;
    }
    while ( v7 );
  }
}
