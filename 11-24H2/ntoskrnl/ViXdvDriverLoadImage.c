/*
 * XREFs of ViXdvDriverLoadImage @ 0x140B8A9B0
 * Callers:
 *     VfDriverLoadSucceeded @ 0x1404B33E0 (VfDriverLoadSucceeded.c)
 *     ViLogAndLoadXdv @ 0x140B83B40 (ViLogAndLoadXdv.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14042CAF0 (RtlImageDirectoryEntryToData.c)
 *     VfUtilDbgPrint @ 0x14061029C (VfUtilDbgPrint.c)
 *     ViXdvSetXdvKernelUtilities @ 0x1406111A4 (ViXdvSetXdvKernelUtilities.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     strcmp @ 0x1406C0400 (strcmp.c)
 *     ViXdvGetFuncAddress @ 0x140B8AB70 (ViXdvGetFuncAddress.c)
 */

char __fastcall ViXdvDriverLoadImage(__int64 a1)
{
  unsigned __int64 v1; // r14
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rsi
  unsigned __int64 v5; // r15
  char v6; // bl
  const char *v7; // rbp
  __int64 FuncAddress; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v16; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v2 = RtlImageDirectoryEntryToData(v1, 1, 0, &v16);
  v3 = v2;
  if ( v2 && *(_DWORD *)(v2 + 24) )
  {
    v4 = 0LL;
    v5 = v1 + *(unsigned int *)(v2 + 32);
    v6 = 1;
    while ( 1 )
    {
      v7 = (const char *)(v1 + *(unsigned int *)(v5 + 4 * v4));
      if ( !strcmp("SetXdvKernelUtilities", v7) )
      {
        FuncAddress = ViXdvGetFuncAddress(v1, v3, (unsigned int)v4);
        if ( !FuncAddress )
        {
          VfUtilDbgPrint("Error on getting XDV utility routine.\n");
          goto LABEL_19;
        }
        if ( !ViXdvSetXdvKernelUtilities(FuncAddress, v9, v10) )
        {
          VfUtilDbgPrint("Error on binding utility functions.\n");
LABEL_19:
          v6 = 0;
        }
      }
      else if ( !strcmp("XdvHibernationNotification", v7) )
      {
        ViFnExtensionHiberFunc = (PVOID)ViXdvGetFuncAddress(v1, v3, (unsigned int)v4);
        if ( !ViFnExtensionHiberFunc )
        {
          VfUtilDbgPrint("Error on binding XdvHibernationNotification.\n");
          goto LABEL_19;
        }
      }
      else if ( !strcmp("XdvQueryDispatchTable", v7) )
      {
        ViFnXdvQueryDispatchTable = ViXdvGetFuncAddress(v1, v3, (unsigned int)v4);
        if ( !ViFnXdvQueryDispatchTable )
        {
          VfUtilDbgPrint("Error on binding XdvQueryDispatchTable.\n");
          goto LABEL_19;
        }
      }
      else
      {
        if ( strcmp("XdvLoadDifPlugins", v7) )
        {
          if ( !strcmp("AutoFailInject", v7) )
          {
            ViFnAutoFailInject = ViXdvGetFuncAddress(v1, v3, (unsigned int)v4);
            v6 = ViFnAutoFailInject != 0 ? v6 : 0;
          }
          goto LABEL_22;
        }
        ViFnXdvLoadDifPlugins = ViXdvGetFuncAddress(v1, v3, (unsigned int)v4);
        if ( !ViFnXdvLoadDifPlugins )
        {
          VfUtilDbgPrint("Error on calling XDV DIF plugins.\n");
          goto LABEL_19;
        }
        guard_dispatch_icall_no_overrides(v12, v11, v13, v14);
      }
LABEL_22:
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= *(_DWORD *)(v3 + 24) )
        return v6;
    }
  }
  return 0;
}
