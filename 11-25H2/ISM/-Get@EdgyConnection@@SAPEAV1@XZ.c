/*
 * XREFs of ?Get@EdgyConnection@@SAPEAV1@XZ @ 0x1800827F0
 * Callers:
 *     ??0EdgyControllerClientProxy@@QEAA@AEBV?$ComPtr@VEdgyControllerServer@@@WRL@Microsoft@@@Z @ 0x180153FCC (--0EdgyControllerClientProxy@@QEAA@AEBV-$ComPtr@VEdgyControllerServer@@@WRL@Microsoft@@@Z.c)
 *     ??0EdgyControllerServer@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180155570 (--0EdgyControllerServer@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ??0EdgyLegacyProcessor@@QEAA@XZ @ 0x1801A0F10 (--0EdgyLegacyProcessor@@QEAA@XZ.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18001C070 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??4?$ComPtr@VEdgyConnection@@@WRL@Microsoft@@QEAAAEAV012@PEAVEdgyConnection@@@Z @ 0x18009516C (--4-$ComPtr@VEdgyConnection@@@WRL@Microsoft@@QEAAAEAV012@PEAVEdgyConnection@@@Z.c)
 */

struct EdgyConnection *EdgyConnection::Get(void)
{
  struct EdgyConnection *result; // rax
  _DWORD *v1; // rax
  void **v2; // rcx

  result = (struct EdgyConnection *)EdgyConnection::s_spThis;
  if ( !EdgyConnection::s_spThis )
  {
    v1 = RefCountedObject::operator new(0x60uLL);
    if ( v1 )
    {
      *(_QWORD *)v1 = &RefCountedObject::`vftable';
      v2 = &EdgyConnection::`vftable';
      *(_QWORD *)v1 = &EdgyConnection::`vftable';
      v1[2] = 1;
      *((_QWORD *)v1 + 2) = 0LL;
      *((_QWORD *)v1 + 3) = 0LL;
      *((_QWORD *)v1 + 4) = 0LL;
      *((_QWORD *)v1 + 5) = 0LL;
      *((_QWORD *)v1 + 6) = 0LL;
      *((_QWORD *)v1 + 7) = 0LL;
      *((_QWORD *)v1 + 8) = 0LL;
      *((_QWORD *)v1 + 9) = 0LL;
      *((_QWORD *)v1 + 10) = 0LL;
      *((_QWORD *)v1 + 11) = 0LL;
    }
    Microsoft::WRL::ComPtr<EdgyConnection>::operator=(v2, v1);
    return (struct EdgyConnection *)EdgyConnection::s_spThis;
  }
  return result;
}
