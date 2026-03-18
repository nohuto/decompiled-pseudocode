/*
 * XREFs of NtDCompositionReleaseAllResources @ 0x14006DDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x14006DF90 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z @ 0x140081390 (-ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtDCompositionReleaseAllResources(unsigned int a1, _BYTE *a2)
{
  _BYTE *v2; // rsi
  bool v3; // bl
  signed int v4; // edi
  struct DirectComposition::CApplicationChannel *v5; // rbx
  bool v7; // [rsp+38h] [rbp+10h] BYREF
  struct DirectComposition::CApplicationChannel *v8; // [rsp+40h] [rbp+18h] BYREF

  v2 = a2;
  v8 = 0LL;
  v3 = 0;
  v7 = 0;
  v4 = a2 == 0LL ? 0xC000000D : 0;
  if ( a2 )
  {
    v4 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v8);
    if ( v4 >= 0 )
    {
      v5 = v8;
      DirectComposition::CApplicationChannel::ReleaseAllResources(v8, &v7);
      (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v5)(v5);
      v3 = v7;
    }
  }
  if ( v4 >= 0 )
  {
    if ( (unsigned __int64)v2 >= MmUserProbeAddress )
      v2 = (_BYTE *)MmUserProbeAddress;
    *v2 = v3;
  }
  return (unsigned int)v4;
}
