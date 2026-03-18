/*
 * XREFs of ?reset@?$unique_ptr@VDISPLAYSTATECHECKER@@U?$default_delete@VDISPLAYSTATECHECKER@@@wistd@@@wistd@@QEAAXPEAVDISPLAYSTATECHECKER@@@Z @ 0x14006D378
 * Callers:
 *     DxgkCheckDisplayState @ 0x1401C1B60 (DxgkCheckDisplayState.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x140023380 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall wistd::unique_ptr<DISPLAYSTATECHECKER,wistd::default_delete<DISPLAYSTATECHECKER>>::reset(
        char **a1,
        char *a2)
{
  char *v2; // rbx

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
  {
    `vector destructor iterator'(
      v2 + 40,
      3512LL,
      4LL,
      (void (__fastcall *)(char *))DISPLAYDIAGNOSTICADAPTERDATA::~DISPLAYDIAGNOSTICADAPTERDATA);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v2);
  }
}
