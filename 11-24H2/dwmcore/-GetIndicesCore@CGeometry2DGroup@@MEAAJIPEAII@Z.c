/*
 * XREFs of ?GetIndicesCore@CGeometry2DGroup@@MEAAJIPEAII@Z @ 0x180212AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGeometry2DGroup::GetIndicesCore(
        CGeometry2DGroup *this,
        unsigned int a2,
        unsigned int *a3,
        unsigned int a4)
{
  int v4; // eax
  unsigned int v5; // ebp
  _QWORD *v10; // rdi
  _QWORD *v11; // r13
  __int64 v12; // rsi
  int v13; // eax
  unsigned int v15; // [rsp+60h] [rbp+8h]

  v4 = *((_DWORD *)this + 10);
  v5 = 0;
  *((_DWORD *)this + 10) = v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)(v4 + 2)) & 6;
  if ( (((unsigned __int8)v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)(v4 + 2)) & 6) & 6) == 2 )
  {
    v10 = (_QWORD *)*((_QWORD *)this + 11);
    v11 = (_QWORD *)*((_QWORD *)this + 12);
    while ( v10 != v11 )
    {
      v12 = *v10;
      if ( *v10 )
      {
        v15 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v12 + 192LL))(*v10);
        v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *, _QWORD))(*(_QWORD *)v12 + 216LL))(
                v12,
                a2,
                a3,
                a4);
        v5 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x154u, 0LL);
          break;
        }
        a4 -= v15;
        a3 += v15;
        a2 += (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 184LL))(v12);
      }
      ++v10;
    }
  }
  *((_DWORD *)this + 10) ^= (*((_DWORD *)this + 10) ^ (2 * (*((_DWORD *)this + 10) >> 1) - 2)) & 6;
  return v5;
}
