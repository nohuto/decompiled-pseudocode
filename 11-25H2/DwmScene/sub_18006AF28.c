/*
 * XREFs of sub_18006AF28 @ 0x18006AF28
 * Callers:
 *     sub_18006A24C @ 0x18006A24C (sub_18006A24C.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_18006A4AC @ 0x18006A4AC (sub_18006A4AC.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18006AF28(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  volatile signed __int32 *v9; // rcx

  v2 = sub_18001B098(1784LL);
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::ImageProcessingCamera>::`vftable';
    sub_18006A4AC();
  }
  else
  {
    v3 = 0LL;
  }
  v4 = v3 + 16;
  *a1 = v3 + 16;
  a1[1] = v3;
  if ( v3 != -16 )
  {
    v5 = *(_QWORD *)(v3 + 32);
    if ( !v5 || !*(_DWORD *)(v5 + 8) )
    {
      if ( v3 )
        _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
      v6 = a1[1];
      v7 = 0LL;
      v8 = 0LL;
      if ( v6 )
      {
        v7 = v4;
        v8 = a1[1];
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 12));
      }
      *(_QWORD *)(v4 + 8) = v7;
      v9 = *(volatile signed __int32 **)(v4 + 16);
      *(_QWORD *)(v4 + 16) = v8;
      if ( v9 )
        sub_180010544(v9);
      if ( v6 )
        sub_18001050C(v6);
    }
  }
  return a1;
}
