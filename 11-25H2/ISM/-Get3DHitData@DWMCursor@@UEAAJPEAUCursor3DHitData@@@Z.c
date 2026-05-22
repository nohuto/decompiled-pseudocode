/*
 * XREFs of ?Get3DHitData@DWMCursor@@UEAAJPEAUCursor3DHitData@@@Z @ 0x1801C0D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMCursor::Get3DHitData(DWMCursor *this, struct Cursor3DHitData *a2)
{
  char *v2; // rdx

  *(_OWORD *)a2 = *(_OWORD *)((char *)this + 168);
  *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)this + 184);
  *((_OWORD *)a2 + 2) = *(_OWORD *)((char *)this + 200);
  *((_OWORD *)a2 + 3) = *(_OWORD *)((char *)this + 216);
  *((_OWORD *)a2 + 4) = *(_OWORD *)((char *)this + 232);
  *((_OWORD *)a2 + 5) = *(_OWORD *)((char *)this + 248);
  *((_OWORD *)a2 + 6) = *(_OWORD *)((char *)this + 264);
  v2 = (char *)a2 + 128;
  *((_OWORD *)v2 - 1) = *(_OWORD *)((char *)this + 280);
  *(_OWORD *)v2 = *(_OWORD *)((char *)this + 296);
  *((_OWORD *)v2 + 1) = *(_OWORD *)((char *)this + 312);
  *((_OWORD *)v2 + 2) = *(_OWORD *)((char *)this + 328);
  *((_OWORD *)v2 + 3) = *(_OWORD *)((char *)this + 344);
  *((_QWORD *)v2 + 8) = *((_QWORD *)this + 45);
  return 0LL;
}
