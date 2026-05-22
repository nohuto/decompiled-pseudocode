/*
 * XREFs of ?GetRegions@BamoInputSpacePayloadPrincipal@@UEAAXPEAPEBUINPUT_SPACE_REGION@@PEAI@Z @ 0x18013D130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BamoInputSpacePayloadPrincipal::GetRegions(
        BamoInputSpacePayloadPrincipal *this,
        const struct INPUT_SPACE_REGION **a2,
        unsigned int *a3)
{
  *a2 = (const struct INPUT_SPACE_REGION *)*((_QWORD *)this + 8);
  *a3 = *((_DWORD *)this + 18);
}
