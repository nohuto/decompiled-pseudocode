/*
 * XREFs of PiDevCfgFreeResolveContext @ 0x14094C634
 * Callers:
 *     PiDevCfgConfigureDeviceKeys @ 0x14094C3DC (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgInitResolveContext @ 0x14094C71C (PiDevCfgInitResolveContext.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x14094CA3C (PiDevCfgVerifyDeviceAllowed.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     PiDevCfgFreeVariable @ 0x14094C6B4 (PiDevCfgFreeVariable.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PiDevCfgFreeResolveContext(__int64 a1)
{
  unsigned int i; // ebx
  _QWORD **v3; // rdx
  _QWORD *v4; // rcx
  void *v5; // rcx
  _QWORD *v6; // rax

  if ( *(_QWORD *)(a1 + 24) )
  {
    for ( i = 0; i < 0x7F; ++i )
    {
      while ( 1 )
      {
        v3 = (_QWORD **)(*(_QWORD *)(a1 + 24) + 16LL * i);
        v4 = *v3;
        if ( *v3 == v3 )
          break;
        if ( (_QWORD **)v4[1] != v3 || (v6 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
          __fastfail(3u);
        *v3 = v6;
        v6[1] = v3;
        PiDevCfgFreeVariable(v4);
      }
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 24), 0);
  }
  v5 = *(void **)(a1 + 16);
  if ( v5 )
    ZwClose(v5);
}
