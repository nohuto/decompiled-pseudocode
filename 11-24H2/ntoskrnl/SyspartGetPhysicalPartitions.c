/*
 * XREFs of SyspartGetPhysicalPartitions @ 0x140816418
 * Callers:
 *     BiSpacesUpdatePhysicalDevicePath @ 0x140698AF0 (BiSpacesUpdatePhysicalDevicePath.c)
 * Callees:
 *     SiFindSystemPartition @ 0x140816574 (SiFindSystemPartition.c)
 *     SiQueryProperty @ 0x140A48990 (SiQueryProperty.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SyspartGetPhysicalPartitions(__int64 a1, _DWORD *a2, unsigned int a3)
{
  int SystemPartition; // ebx
  unsigned int v6; // r12d
  int v7; // eax
  _DWORD *v8; // rsi
  unsigned int i; // ebp
  _DWORD *v10; // r15
  __int64 v11; // rcx
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  P = 0LL;
  if ( a3 >= 0xC )
  {
    a2[2] = 0;
    a2[1] = 12;
    *a2 = 24;
    v6 = a3 - 12;
    v7 = SiQueryProperty(a1, 21LL, 24LL, &P);
    v8 = P;
    SystemPartition = v7;
    if ( v7 >= 0 )
    {
      for ( i = 0; i < v8[2]; ++i )
      {
        v10 = &v8[3 * i + 3];
        SystemPartition = SiFindSystemPartition(v10);
        if ( SystemPartition < 0 )
          goto LABEL_14;
        if ( v10[2] != -1 )
        {
          a2[1] += 12;
          if ( v6 >= 0xC )
          {
            v11 = 3 * ((unsigned int)a2[2] + 1LL);
            *(_QWORD *)&a2[v11] = *(_QWORD *)v10;
            a2[v11 + 2] = v10[2];
            ++a2[2];
            v6 -= 12;
          }
          else
          {
            v6 = 0;
          }
        }
      }
      if ( a3 < a2[1] )
        SystemPartition = -2147483643;
    }
LABEL_14:
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
  }
  else
  {
    return (unsigned int)-1073741789;
  }
  return (unsigned int)SystemPartition;
}
