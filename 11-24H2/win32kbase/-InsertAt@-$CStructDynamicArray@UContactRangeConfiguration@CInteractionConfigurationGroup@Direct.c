/*
 * XREFs of ?InsertAt@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAJAEBUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@I@Z @ 0x14004A088
 * Callers:
 *     ?CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ @ 0x140049698 (-CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ.c)
 *     ?SetConfigurationAll@CInteractionConfigurationGroup@DirectComposition@@QEAAJW4Enum@InteractionInputType@@@Z @ 0x14004981C (-SetConfigurationAll@CInteractionConfigurationGroup@DirectComposition@@QEAAJW4Enum@InteractionIn.c)
 *     ?UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4Enum@InteractionProperty@@UContactRangeConfiguration@12@PEAV?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@PEA_N@Z @ 0x140049C20 (-UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4E.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?Grow@?$CDynamicArray@PEAUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@$0HHHAHDFF@@@IEAAJI@Z @ 0x14004A178 (-Grow@-$CDynamicArray@PEAUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposi.c)
 */

__int64 __fastcall CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _DWORD *v3; // rsi
  int v4; // r9d
  __int64 v5; // rbp
  _DWORD *v8; // rdi
  int v9; // esi
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v13; // r11

  v3 = (_DWORD *)(a1 + 8);
  v4 = 0;
  v5 = (unsigned int)a3;
  v8 = (_DWORD *)(a1 + 8);
  if ( *(_DWORD *)(a1 + 8) == *(_DWORD *)(a1 + 12) )
  {
    v4 = CDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration *,2003858261>::Grow(
           a1,
           a2,
           a3,
           0LL);
    if ( v4 < 0 )
      goto LABEL_5;
    v8 = (_DWORD *)(a1 + 8);
  }
  if ( *v3 >= *(_DWORD *)(a1 + 12) )
    return (unsigned int)-1073741823;
LABEL_5:
  v9 = v4;
  if ( v4 >= 0 )
  {
    v10 = Win32AllocPoolZInitImpl(256LL, 0xCuLL, 0x32644344u);
    if ( v10 )
    {
      v4 = v9;
      *(_QWORD *)v10 = *(_QWORD *)a2;
      *(_DWORD *)(v10 + 8) = *(_DWORD *)(a2 + 8);
      v11 = (unsigned int)*v8;
      if ( (unsigned int)v11 > (unsigned int)v5 )
      {
        v13 = 8 * v11;
        do
        {
          v11 = (unsigned int)(v11 - 1);
          *(_QWORD *)(v13 + *(_QWORD *)a1) = *(_QWORD *)(*(_QWORD *)a1 + 8 * v11);
          v13 -= 8LL;
        }
        while ( (unsigned int)v11 > (unsigned int)v5 );
        v8 = (_DWORD *)(a1 + 8);
      }
      *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) = v10;
      ++*v8;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v4;
}
