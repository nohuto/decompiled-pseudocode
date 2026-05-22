/*
 * XREFs of ?OnStreamEnded@ShellGesturesProcessor@@UEAAJPEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180083580
 * Callers:
 *     <none>
 * Callees:
 *     ??$?RW4_Button@@@?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@QEBA_KAEBW4_Button@@@Z @ 0x180027528 (--$-RW4_Button@@@-$_Uhash_compare@W4_Button@@U-$hash@W4_Button@@@std@@U-$equal_to@W4_Button@@@3@.c)
 *     ?_Erase_bucket@?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@IEAAXPEAU?$_List_node@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@PEAX@2@_K@Z @ 0x180057420 (-_Erase_bucket@-$_Hash@V-$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V-$_Uhash_comp.c)
 *     ?_Unchecked_erase@?$list@U?$pair@$$CBIUActiveContactData@ShellGesturesProcessor@@@std@@V?$allocator@U?$pair@$$CBIUActiveContactData@ShellGesturesProcessor@@@std@@@2@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBIUActiveContactData@ShellGesturesProcessor@@@std@@PEAX@2@QEAU32@@Z @ 0x180081B98 (-_Unchecked_erase@-$list@U-$pair@$$CBIUActiveContactData@ShellGesturesProcessor@@@std@@V-$alloca.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x18008B160 (MicrosoftTelemetryAssertTriggeredArgs.c)
 *     ?StaleActiveContacts@ShellGestures@InputTraceLogging@@SAXKIW4ContextualProcessorDecision@@W4GestureRecognizerState@@1W4GestureOperationState@@@Z @ 0x180159FA0 (-StaleActiveContacts@ShellGestures@InputTraceLogging@@SAXKIW4ContextualProcessorDecision@@W4Gest.c)
 */

__int64 __fastcall ShellGesturesProcessor::OnStreamEnded(
        ShellGesturesProcessor *this,
        struct InputContext *a2,
        struct ContextualProcessorResponse *a3)
{
  __int64 v3; // rdi
  __int64 i; // rbx
  int v7; // ecx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  char *v12; // rdx

  v3 = *(_QWORD *)a3;
  if ( *(_QWORD *)a3 )
  {
    i = *((_QWORD *)this + 16);
LABEL_3:
    for ( i = *(_QWORD *)i;
          i != *((_QWORD *)this + 16);
          i = std::list<std::pair<unsigned int const,ShellGesturesProcessor::ActiveContactData>>::_Unchecked_erase(
                (__int64)this + 128,
                v12) )
    {
      if ( *(_QWORD *)(i + 24) != v3 )
        goto LABEL_3;
      if ( *(_BYTE *)(v3 + 456) )
        v7 = *(_DWORD *)(v3 + 428);
      else
        v7 = 0;
      if ( *(_BYTE *)(v3 + 416) )
        v8 = *(_DWORD *)(v3 + 272);
      else
        v8 = 0;
      InputTraceLogging::ShellGestures::StaleActiveContacts(
        *(unsigned int *)(i + 36),
        *(unsigned int *)(i + 44),
        *((unsigned int *)a2 + 26),
        *(unsigned int *)(v3 + 24),
        v8,
        v7);
      MicrosoftTelemetryAssertTriggeredArgs(v9, 0x20000LL, 901LL);
      v11 = std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>::operator()<enum _Button>(
              v10,
              i + 16);
      std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::_Erase_bucket(
        (__int64)this + 120,
        (_QWORD *)i,
        *((_QWORD *)this + 21) & v11);
    }
  }
  return 0LL;
}
