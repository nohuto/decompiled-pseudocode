/*
 * XREFs of ?ShouldBeAutoParented@CWindowData@@QEBA_NPEBU_LIST_ENTRY@@@Z @ 0x180024D70
 * Callers:
 *     ?ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z @ 0x180024BD0 (-ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?PropertiesAllowAutoParenting@CWindowData@@QEBA_NXZ @ 0x18001E8BC (-PropertiesAllowAutoParenting@CWindowData@@QEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CWindowData::ShouldBeAutoParented(CWindowData *this, const struct _LIST_ENTRY *a2)
{
  __int64 v4; // rcx
  __int64 v6; // rcx
  __int64 i; // rax
  __int64 v8; // rdx

  v4 = *((_QWORD *)this + 3);
  if ( v4 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 432LL))(v4) )
    {
      if ( CWindowData::PropertiesAllowAutoParenting(this) )
      {
        if ( (*((_BYTE *)this + 741) & 0x10) == 0 && !*((_QWORD *)this + 58) && (*((_BYTE *)this + 740) & 2) == 0 )
        {
          v6 = *((_QWORD *)this + 75);
          if ( (*(_BYTE *)(v6 + 736) & 1) != 0 && *(_QWORD *)(v6 + 440) && (*(_BYTE *)(v6 + 742) & 0x10) == 0 )
          {
            for ( i = *((_QWORD *)this + 1); (const struct _LIST_ENTRY *)i != a2; i = *(_QWORD *)(i + 8) )
            {
              if ( i == v6 )
                return 1;
              if ( (*(_BYTE *)(i + 736) & 1) != 0 )
              {
                v8 = *(_QWORD *)(i + 440);
                if ( v8 )
                {
                  if ( *(_QWORD *)(v8 + 24) )
                  {
                    if ( *(_QWORD *)(i + 600) != v6 )
                      return 0;
                    return (*(_BYTE *)(i + 742) & 0x10) != 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
