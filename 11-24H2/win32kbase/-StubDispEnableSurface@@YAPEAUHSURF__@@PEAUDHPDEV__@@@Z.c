/*
 * XREFs of ?StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1400F8430
 * Callers:
 *     <none>
 * Callees:
 *     EngAssociateSurface @ 0x1400C6970 (EngAssociateSurface.c)
 *     EngDeleteSurface @ 0x1400F8410 (EngDeleteSurface.c)
 *     EngCreateDeviceSurface @ 0x1400F84A0 (EngCreateDeviceSurface.c)
 */

HSURF __fastcall StubDispEnableSurface(struct DHPDEV__ *a1)
{
  HSURF DeviceSurface; // rax
  HSURF v3; // rbx

  DeviceSurface = EngCreateDeviceSurface(0LL, *(SIZEL *)(a1 + 4), 6u);
  v3 = DeviceSurface;
  if ( !DeviceSurface )
    return 0LL;
  if ( !EngAssociateSurface(DeviceSurface, *(HDEV *)a1, 0x479u) )
  {
    EngDeleteSurface(v3);
    return 0LL;
  }
  *((_QWORD *)a1 + 1) = v3;
  return v3;
}
