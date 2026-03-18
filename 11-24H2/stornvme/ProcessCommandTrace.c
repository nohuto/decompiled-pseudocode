/*
 * XREFs of ProcessCommandTrace @ 0x14000B440
 * Callers:
 *     ProcessCommandInSpecificQueue @ 0x14000AD90 (ProcessCommandInSpecificQueue.c)
 *     ProcessPendingIoCommands @ 0x140014BB0 (ProcessPendingIoCommands.c)
 *     ProcessMultipleCommandsInSpecificQueue @ 0x14002CE94 (ProcessMultipleCommandsInSpecificQueue.c)
 * Callees:
 *     GetSrbExtension @ 0x140005060 (GetSrbExtension.c)
 */

void __fastcall ProcessCommandTrace(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v6; // edx
  __int64 v7; // rdi
  unsigned int v8; // r8d
  unsigned int i; // ecx
  __int64 v10; // r14
  __int64 SrbExtension; // rax
  __int64 v12; // r15

  if ( (*(_BYTE *)(a1 + 21) & 8) != 0 )
  {
    v6 = a3[1];
    v7 = 0LL;
    if ( v6 != -1 )
    {
      v8 = *(_DWORD *)(a1 + 224);
      for ( i = 0; i < v8; ++i )
      {
        v10 = *(_QWORD *)(a1 + 8LL * i + 1672);
        if ( v10 && *(_DWORD *)(v10 + 16) == v6 )
          goto LABEL_9;
      }
    }
    v10 = 0LL;
LABEL_9:
    if ( a2
      && (SrbExtension = GetSrbExtension(a2), (v7 = SrbExtension) != 0)
      && (*(_BYTE *)(SrbExtension + 4225) & 1) != 0
      || v7 )
    {
      v12 = v7 + 4225;
    }
    else
    {
      v12 = 4225LL;
    }
    StorPortExtendedFunction(87LL, a1, v10, 0LL);
    if ( v7 && (*(_BYTE *)v12 & 1) != 0 )
    {
      switch ( (unsigned __int8)*a3 )
      {
        case 6u:
          StorPortExtendedFunction(85LL, a1, v10, 0LL);
          break;
        case 0x10u:
        case 0x11u:
        case 0x81u:
        case 0x82u:
          StorPortExtendedFunction(86LL, a1, v10, 0LL);
          break;
        default:
          goto LABEL_20;
      }
    }
    else
    {
LABEL_20:
      StorPortExtendedFunction(87LL, a1, v10, 0LL);
    }
  }
}
