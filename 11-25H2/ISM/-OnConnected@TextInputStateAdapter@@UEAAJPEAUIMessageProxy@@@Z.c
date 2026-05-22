/*
 * XREFs of ?OnConnected@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@@Z @ 0x1801C6680
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0sqq_EventWriteTransfer @ 0x180195268 (McTemplateU0sqq_EventWriteTransfer.c)
 *     ?PropertyChangeHelper@TextInputStateAdapter@@AEAAJG_N@Z @ 0x1801C6820 (-PropertyChangeHelper@TextInputStateAdapter@@AEAAJG_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TextInputStateAdapter::OnConnected(TextInputStateAdapter *this, struct IMessageProxy *a2)
{
  int i; // ebx
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // edi
  __int64 v8; // r9

  *((_BYTE *)this + 56) = 1;
  for ( i = 0; ; ++i )
  {
    if ( i >= 41 )
      return 0;
    if ( i == 18 )
      break;
    if ( (unsigned int)(i - 14) > 1 && i != 27 )
    {
      v4 = TextInputStateAdapter::PropertyChangeHelper(this, i, 1);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
          return v7;
        v8 = 95LL;
        goto LABEL_9;
      }
    }
LABEL_11:
    ;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 5) + 176LL))(
         *((_QWORD *)this + 5),
         (char *)this + 100);
  v7 = v4;
  if ( v4 >= 0 )
    goto LABEL_11;
  if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
  {
    v8 = 101LL;
LABEL_9:
    McTemplateU0sqq_EventWriteTransfer(v6, v5, "TextInputStateAdapter::OnConnected", v8, v4);
  }
  return v7;
}
