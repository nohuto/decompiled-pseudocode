/*
 * XREFs of ?ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVCWindowRepresentation@@@Z @ 0x180034198
 * Callers:
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180036300 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     ?AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x1800340D0 (-AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4Window.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x18004F464 (-RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4Win.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CWindowData::ChangeSecondaryWindowRepresentation(
        CWindowData *this,
        struct CSecondaryWindowRepresentation *a2,
        CWindowData **a3,
        __int64 a4)
{
  CWindowData *v6; // rcx
  char v7; // bl
  CWindowData *v8; // rdi
  bool v9; // bp
  int v10; // eax
  unsigned int v11; // ebx
  __int128 v13; // [rsp+30h] [rbp-18h]

  v6 = *a3;
  v7 = 1;
  v8 = (CWindowData *)*((_QWORD *)a2 + 8);
  v13 = *((_OWORD *)a2 + 4);
  v9 = *a3 != v8;
  if ( *a3 )
  {
    if ( *a3 == v8 || v6 == this )
      a4 = 0LL;
    else
      LOBYTE(a4) = 1;
    CWindowData::RemoveSecondaryWindowRepresentation(v6, a2, *((unsigned int *)a3 + 2), a4);
  }
  if ( !v9 || v8 == this )
    v7 = 0;
  v10 = CWindowData::AddSecondaryWindowRepresentation((__int64)v8, a2, SDWORD2(v13), v7);
  v11 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x3DDu, 0LL);
  return v11;
}
