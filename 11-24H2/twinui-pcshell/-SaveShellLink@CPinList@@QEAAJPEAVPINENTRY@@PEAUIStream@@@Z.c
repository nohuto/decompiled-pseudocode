/*
 * XREFs of ?SaveShellLink@CPinList@@QEAAJPEAVPINENTRY@@PEAUIStream@@@Z @ 0x180694DB0
 * Callers:
 *     ?ILWriteCallback@CPinList@@CAHPEAVPINENTRY@@PEAUILWRITEINFO@1@@Z @ 0x180691590 (-ILWriteCallback@CPinList@@CAHPEAVPINENTRY@@PEAUILWRITEINFO@1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?IStream_GetPos@@YAJPEAUIStream@@PEAT_LARGE_INTEGER@@@Z @ 0x180691708 (-IStream_GetPos@@YAJPEAUIStream@@PEAT_LARGE_INTEGER@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPinList::SaveShellLink(CPinList *this, struct PINENTRY *a2, struct IStream *a3)
{
  HRESULT Pos; // ebx
  DWORD *v7; // rsi
  __int64 v9; // [rsp+30h] [rbp-30h] BYREF
  DWORD pv; // [rsp+38h] [rbp-28h] BYREF
  union _LARGE_INTEGER v11; // [rsp+40h] [rbp-20h] BYREF
  union _LARGE_INTEGER v12; // [rsp+48h] [rbp-18h] BYREF

  if ( *((_QWORD *)a2 + 1) )
  {
    v11.QuadPart = 0LL;
    v12.QuadPart = 0LL;
    pv = 0;
    v9 = 0LL;
    Pos = IStream_GetPos(a3, &v11);
    if ( Pos >= 0 )
    {
      Pos = IStream_Write(a3, &pv, 4u);
      if ( Pos >= 0 )
      {
        Pos = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2 + 1))(
                *((_QWORD *)a2 + 1),
                &GUID_00000109_0000_0000_c000_000000000046,
                &v9);
        if ( Pos >= 0 )
        {
          Pos = (*(__int64 (__fastcall **)(__int64, struct IStream *, __int64))(*(_QWORD *)v9 + 48LL))(v9, a3, 1LL);
          if ( Pos >= 0 )
          {
            Pos = IStream_GetPos(a3, &v12);
            if ( Pos >= 0 )
            {
              Pos = (*(__int64 (__fastcall **)(struct IStream *, union _LARGE_INTEGER, _QWORD, _QWORD))(*(_QWORD *)a3 + 40LL))(
                      a3,
                      v11,
                      0LL,
                      0LL);
              if ( Pos >= 0 )
              {
                pv = v12.LowPart - v11.LowPart - 4;
                Pos = IStream_Write(a3, &pv, 4u);
                if ( Pos >= 0 )
                  Pos = (*(__int64 (__fastcall **)(struct IStream *, union _LARGE_INTEGER, _QWORD, _QWORD))(*(_QWORD *)a3 + 40LL))(
                          a3,
                          v12,
                          0LL,
                          0LL);
              }
            }
          }
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        }
      }
    }
  }
  else
  {
    v7 = (DWORD *)((char *)a2 + 24);
    Pos = IStream_Write(a3, (char *)a2 + 24, 4u);
    if ( Pos >= 0 )
    {
      if ( *v7 )
      {
        Pos = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 1) + 40LL))(
                *((_QWORD *)this + 1),
                *((_QWORD *)a2 + 2),
                0LL,
                0LL);
        if ( Pos >= 0 )
          return (unsigned int)IStream_Copy(*((IStream **)this + 1), a3, *v7);
      }
    }
  }
  return (unsigned int)Pos;
}
