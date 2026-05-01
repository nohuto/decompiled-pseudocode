/*
 * XREFs of ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x18010F4B0
 * Callers:
 *     ?callback@?$folder_change_reader_t@V?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAX1K_KPEAU_TP_IO@@@Z @ 0x180231230 (-callback@-$folder_change_reader_t@V-$unique_storage@U-$resource_policy@PEAUfolder__ea_180231230.c)
 *     ?_NormalizeAndAddPositionerArgs@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@PEAPEAU2@@Z @ 0x18037F3BC (-_NormalizeAndAddPositionerArgs@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIShellEx.c)
 *     ?_NormalizeAndAddPositionerArgs@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x1803AC4F4 (-_NormalizeAndAddPositionerArgs@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ?GetProcessArgsByPID@Common@@YAJKPEAGPEAK@Z @ 0x18067BDAC (-GetProcessArgsByPID@Common@@YAJKPEAGPEAK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCopyNW(char *a1, __int64 a2, char *a3, unsigned __int64 a4)
{
  __int64 v4; // r9
  signed __int64 v5; // r8
  unsigned __int16 v6; // ax
  unsigned __int16 *v7; // rax
  __int64 result; // rax

  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    if ( !a2 )
      return 2147942487LL;
LABEL_13:
    *(_WORD *)a1 = 0;
    return 2147942487LL;
  }
  if ( a4 > 0x7FFFFFFE )
    goto LABEL_13;
  v4 = a4 - a2;
  v5 = a3 - a1;
  do
  {
    if ( !(v4 + a2) )
      break;
    v6 = *(_WORD *)&a1[v5];
    if ( !v6 )
      break;
    *(_WORD *)a1 = v6;
    a1 += 2;
    --a2;
  }
  while ( a2 );
  v7 = (unsigned __int16 *)(a1 - 2);
  if ( a2 )
    v7 = (unsigned __int16 *)a1;
  *v7 = 0;
  result = 2147942522LL;
  if ( a2 )
    return 0LL;
  return result;
}
