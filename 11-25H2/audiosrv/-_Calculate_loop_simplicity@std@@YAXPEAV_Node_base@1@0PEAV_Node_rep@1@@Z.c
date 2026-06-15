/*
 * XREFs of ?_Calculate_loop_simplicity@std@@YAXPEAV_Node_base@1@0PEAV_Node_rep@1@@Z @ 0x18013EDA4
 * Callers:
 *     ?_Calculate_loop_simplicity@std@@YAXPEAV_Node_base@1@0PEAV_Node_rep@1@@Z @ 0x18013EDA4 (-_Calculate_loop_simplicity@std@@YAXPEAV_Node_base@1@0PEAV_Node_rep@1@@Z.c)
 *     ?_Compile@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@QEAAPEAV_Root_node@2@XZ @ 0x18013F4F0 (-_Compile@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@QEAAPEAV_Root_node@2@XZ.c)
 * Callees:
 *     ?_Calculate_loop_simplicity@std@@YAXPEAV_Node_base@1@0PEAV_Node_rep@1@@Z @ 0x18013EDA4 (-_Calculate_loop_simplicity@std@@YAXPEAV_Node_base@1@0PEAV_Node_rep@1@@Z.c)
 */

void __fastcall std::_Calculate_loop_simplicity(
        struct std::_Node_base *a1,
        struct std::_Node_base *a2,
        struct std::_Node_rep *a3)
{
  struct std::_Node_base *v5; // rbx
  __int64 i; // rsi

  if ( a1 != a2 )
  {
    v5 = a1;
    do
    {
      if ( !v5 )
        break;
      switch ( *((_DWORD *)v5 + 2) )
      {
        case 0xA:
        case 0xB:
          std::_Calculate_loop_simplicity(*((struct std::_Node_base **)v5 + 4), 0LL, 0LL);
          break;
        case 0x10:
          if ( a3 )
            *((_DWORD *)a3 + 13) = 0;
          for ( i = *((_QWORD *)v5 + 5); i; i = *(_QWORD *)(i + 40) )
            std::_Calculate_loop_simplicity(
              *(struct std::_Node_base **)(i + 16),
              *(struct std::_Node_base **)(i + 32),
              a3);
          break;
        case 0x12:
          if ( a3 )
          {
            *((_DWORD *)a3 + 13) = 0;
            *((_DWORD *)v5 + 13) = 0;
          }
          else
          {
            a3 = v5;
          }
          break;
        default:
          if ( *((_DWORD *)v5 + 2) == 19 && a3 == *((struct std::_Node_rep **)v5 + 4) )
          {
            if ( *((_DWORD *)a3 + 13) == -1 )
              *((_DWORD *)a3 + 13) = 1;
            a3 = 0LL;
          }
          break;
      }
      v5 = (struct std::_Node_base *)*((_QWORD *)v5 + 2);
    }
    while ( v5 != a2 );
  }
}
