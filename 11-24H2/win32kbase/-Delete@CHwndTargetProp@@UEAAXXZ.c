/*
 * XREFs of ?Delete@CHwndTargetProp@@UEAAXXZ @ 0x140113570
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?ClearSystemVisual@CHwndTargetProp@@QEAAHW4_HwndTargetType@@@Z @ 0x1401135D0 (-ClearSystemVisual@CHwndTargetProp@@QEAAHW4_HwndTargetType@@@Z.c)
 */

void __fastcall CHwndTargetProp::Delete(char *Buffer)
{
  int i; // edi
  void *v3; // rcx

  for ( i = 0; i < 3; ++i )
    CHwndTargetProp::ClearSystemVisual(Buffer, (unsigned int)i);
  v3 = (void *)*((_QWORD *)Buffer + 9);
  if ( v3 )
  {
    ObfDereferenceObject(v3);
    *((_QWORD *)Buffer + 9) = 0LL;
  }
  GreDeleteFastMutex(Buffer);
}
