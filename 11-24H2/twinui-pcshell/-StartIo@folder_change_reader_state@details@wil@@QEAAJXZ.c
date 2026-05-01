/*
 * XREFs of ?StartIo@folder_change_reader_state@details@wil@@QEAAJXZ @ 0x1802B9190
 * Callers:
 *     ?callback@?$folder_change_reader_t@V?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAX1K_KPEAU_TP_IO@@@Z @ 0x180218450 (-callback@-$folder_change_reader_t@V-$unique_storage@U-$resource_policy@PEAUfolder_change_reader.c)
 *     ?callback@?$folder_change_reader_t@V?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAX1K_KPEAU_TP_IO@@@Z @ 0x180231230 (-callback@-$folder_change_reader_t@V-$unique_storage@U-$resource_policy@PEAUfolder__ea_180231230.c)
 *     ?create_common@?$folder_change_reader_t@V?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@AEAAJPEBG_NW4FolderChangeEvents@2@$$QEAV?$function@$$A6AXW4FolderChangeEvent@wil@@PEBG@Z@wistd@@@Z @ 0x180584B28 (-create_common@-$folder_change_reader_t@V-$unique_storage@U-$resource_policy@PEAUfolder_change_r.c)
 *     ?create_common@?$folder_change_reader_t@V?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJPEBG_NW4FolderChangeEvents@2@$$QEAV?$function@$$A6AXW4FolderChangeEvent@wil@@PEBG@Z@wistd@@@Z @ 0x180616AC8 (-create_common@-$folder_change_reader_t@V-$unique_storage@U-$resource_policy@PEAUfo_ea_180616AC8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::folder_change_reader_state::StartIo(wil::details::folder_change_reader_state *this)
{
  signed int v2; // ebx
  signed int LastError; // eax

  StartThreadpoolIo(*((PTP_IO *)this + 21));
  if ( ReadDirectoryChangesW(
         *((HANDLE *)this + 15),
         (char *)this + 184,
         0x1000u,
         *((_DWORD *)this + 32),
         *((_DWORD *)this + 33),
         0LL,
         (LPOVERLAPPED)((char *)this + 136),
         0LL) )
  {
    return 0;
  }
  else
  {
    LastError = GetLastError();
    v2 = LastError;
    if ( LastError > 0 )
      v2 = (unsigned __int16)LastError | 0x80070000;
    if ( v2 < 0 )
      CancelThreadpoolIo(*((PTP_IO *)this + 21));
  }
  return (unsigned int)v2;
}
