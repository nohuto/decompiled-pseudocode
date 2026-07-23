/*
 * XREFs of sub_140C0AD74 @ 0x140C0AD74
 * Callers:
 *     sub_140BE30B0 @ 0x140BE30B0 (sub_140BE30B0.c)
 * Callees:
 *     KiErrata671Present @ 0x140BDC8B0 (KiErrata671Present.c)
 */

__int64 sub_140C0AD74()
{
  unsigned __int8 CurrentIrql; // al
  unsigned __int64 v1; // rdi
  char v2; // si
  unsigned int v3; // ecx
  unsigned __int8 v5; // [rsp+50h] [rbp+8h]

  CurrentIrql = KeGetCurrentIrql();
  v5 = CurrentIrql;
  __writecr8(0xFuLL);
  v1 = __readcr0();
  __writecr0(v1 & 0xFFFFFFFFFFFEFFFFuLL);
  v2 = *((_BYTE *)KiErrata671Present + 2);
  *((_BYTE *)KiErrata671Present + 2) = -61;
  v3 = KiErrata671Present();
  if ( *((_BYTE *)KiErrata671Present + 2) != v2 )
    *((_BYTE *)KiErrata671Present + 2) = v2;
  __writecr0(v1);
  __writecr8(v5);
  return v3;
}
