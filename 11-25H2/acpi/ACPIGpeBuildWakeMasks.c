/*
 * XREFs of ACPIGpeBuildWakeMasks @ 0x140051C08
 * Callers:
 *     ACPITableLoadCallBack @ 0x140051AD0 (ACPITableLoadCallBack.c)
 *     ACPIGpeBuildWakeMasks @ 0x140051C08 (ACPIGpeBuildWakeMasks.c)
 * Callees:
 *     ACPIExtListEnumNext @ 0x1400172C4 (ACPIExtListEnumNext.c)
 *     ACPIInitReferenceDeviceExtension @ 0x140017C58 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIGpeIndexToGpeRegister @ 0x14001A728 (ACPIGpeIndexToGpeRegister.c)
 *     ACPIExtListStartEnum @ 0x14003D65C (ACPIExtListStartEnum.c)
 *     ACPIGpeBuildWakeMasks @ 0x140051C08 (ACPIGpeBuildWakeMasks.c)
 */

void __fastcall ACPIGpeBuildWakeMasks(__int64 a1)
{
  char *i; // rax
  char *v2; // rbx
  ULONG_PTR v3; // rcx
  __int64 v4; // rdx
  int v5; // r8d
  __int64 v6; // [rsp+20h] [rbp-40h] BYREF
  PKSPIN_LOCK SpinLock[2]; // [rsp+28h] [rbp-38h]
  KIRQL NewIrql[16]; // [rsp+38h] [rbp-28h]
  __int64 v9; // [rsp+48h] [rbp-18h]
  int v10; // [rsp+50h] [rbp-10h]
  int v11; // [rsp+54h] [rbp-Ch]

  v11 = 0;
  v10 = 0;
  v6 = a1 + 800;
  *(_OWORD *)NewIrql = 0LL;
  v9 = 816LL;
  *(_OWORD *)SpinLock = 0LL;
  for ( i = ACPIExtListStartEnum((__int64)&v6); ; i = ACPIExtListEnumNext((__int64)&v6) )
  {
    v2 = i;
    if ( *(_QWORD *)&NewIrql[8] + v9 == v6 )
      break;
    if ( v10 == 1 )
    {
      ACPIInitReferenceDeviceExtension(*(__int64 *)&NewIrql[8]);
      KeReleaseSpinLock(SpinLock[1], NewIrql[0]);
    }
    ACPIGpeBuildWakeMasks(v2);
    if ( (*((_DWORD *)v2 + 2) & 0x10000) != 0 && (*((_QWORD *)v2 + 140) & 0x500000000LL) == 0 )
    {
      v3 = *((unsigned int *)v2 + 126);
      if ( (_DWORD)v3 != -1 )
      {
        v4 = (unsigned int)ACPIGpeIndexToGpeRegister(v3);
        v5 = 1 << (v2[504] & 7);
        if ( ((unsigned __int8)v5 & *((_BYTE *)GpeEnable + v4)) != 0 )
        {
          if ( _bittest64((const signed __int64 *)v2 + 1, 0x23u) )
          {
            *((_BYTE *)GpeSpecialHandler + v4) |= v5;
            *((_BYTE *)GpeWakeHandler + v4) &= ~(_BYTE)v5;
          }
          else if ( ((unsigned __int8)v5 & *((_BYTE *)GpeSpecialHandler + v4)) == 0 )
          {
            *((_BYTE *)GpeWakeHandler + v4) |= v5;
          }
        }
      }
    }
  }
  if ( v10 )
    KeReleaseSpinLock(SpinLock[1], NewIrql[0]);
}
