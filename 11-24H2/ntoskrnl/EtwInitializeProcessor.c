/*
 * XREFs of EtwInitializeProcessor @ 0x1407A671C
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407393A8 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140C28DA8 (KeStartAllProcessors.c)
 *     EtwpInitialize @ 0x140C3F24C (EtwpInitialize.c)
 * Callees:
 *     EtwpStackDeleteProcessor @ 0x14064DFC0 (EtwpStackDeleteProcessor.c)
 *     EtwpStackInitializeProcessor @ 0x14064E008 (EtwpStackInitializeProcessor.c)
 *     EtwpCCSwapDeleteProcessor @ 0x140650D24 (EtwpCCSwapDeleteProcessor.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwInitializeProcessor(__int64 a1)
{
  __int64 Pool2; // rax
  _SLIST_HEADER *v4; // rdi
  int v5; // ebx
  __int64 *v6; // rsi
  unsigned __int64 i; // rbx
  __int64 v8; // rax
  void *Region; // rcx
  void *Alignment; // rcx
  void *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax

  if ( !EtwpHostSiloState )
    return 0LL;
  Pool2 = ExAllocatePool2(0x40uLL, 0x1C0uLL, 0x70777445u);
  v4 = (_SLIST_HEADER *)Pool2;
  if ( Pool2 )
  {
    v6 = (__int64 *)(Pool2 + 408);
    for ( i = 0LL; i < 0x14; i += 4LL )
    {
      if ( *(_DWORD *)((char *)&CCSwapNumLoggersPerClockType + i) )
      {
        if ( !*v6 )
        {
          v8 = ExAllocatePool2(0x40uLL, 0x400uLL, 0x77734343u);
          *v6 = v8;
          if ( !v8 )
            goto LABEL_11;
        }
      }
      ++v6;
    }
    v5 = EtwpStackInitializeProcessor(v4, *(_DWORD *)(a1 + 36));
    if ( v5 >= 0 )
    {
      v12 = ExAllocatePool2(0x48uLL, 8LL * *(unsigned int *)(EtwpHostSiloState + 16), 0x61777445u);
      v4[20].Region = v12;
      if ( v12 )
      {
        v13 = ExAllocatePool2(0x48uLL, 8LL * *(unsigned int *)(EtwpHostSiloState + 16), 0x61777445u);
        v4[20].Alignment = v13;
        if ( v13 )
        {
          v14 = ExAllocatePool2(0x48uLL, 8LL * *(unsigned int *)(EtwpHostSiloState + 16), 0x61777445u);
          v4[21].Alignment = v14;
          if ( v14 )
          {
            *(_QWORD *)(a1 + 35752) = v4;
            return (unsigned int)v5;
          }
        }
      }
LABEL_11:
      v5 = -1073741801;
    }
    Region = (void *)v4[20].Region;
    if ( Region )
      ExFreePoolWithTag(Region, 0);
    Alignment = (void *)v4[20].Alignment;
    if ( Alignment )
      ExFreePoolWithTag(Alignment, 0);
    v11 = (void *)v4[21].Alignment;
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
    EtwpStackDeleteProcessor(v4);
    EtwpCCSwapDeleteProcessor((__int64)v4);
    ExFreePoolWithTag(v4, 0);
    *(_QWORD *)(a1 + 35752) = 0LL;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v5;
}
