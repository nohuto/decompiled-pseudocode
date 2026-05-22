/*
 * XREFs of ??1InputProcess@@UEAA@XZ @ 0x1800C9C08
 * Callers:
 *     ??_GInputProcess@@UEAAPEAXI@Z @ 0x1800C9CE0 (--_GInputProcess@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C7A4 (-InternalRelease@-$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall InputProcess::~InputProcess(Microsoft::Bamo::BaseBamoConnection **this)
{
  Microsoft::Bamo::BaseBamoConnection *v2; // rcx

  Microsoft::WRL::ComPtr<InputSystemInternalServerConnection>::InternalRelease(this + 4);
  v2 = this[3];
  if ( v2 )
  {
    this[3] = 0LL;
    (*(void (__fastcall **)(Microsoft::Bamo::BaseBamoConnection *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  this[1] = (Microsoft::Bamo::BaseBamoConnection *)&RefCountedObject::`vftable';
}
