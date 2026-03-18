/*
 * XREFs of ??_ECOPMProtectedOutput@@UEAAPEAXI@Z @ 0x14008AFE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COPMProtectedOutput@@UEAA@XZ @ 0x14008B018 (--1COPMProtectedOutput@@UEAA@XZ.c)
 *     ?OPMFreeMemory@OPM@@YAXPEAX@Z @ 0x14008C2B0 (-OPMFreeMemory@OPM@@YAXPEAX@Z.c)
 */

COPMProtectedOutput *__fastcall COPMProtectedOutput::`vector deleting destructor'(COPMProtectedOutput *this, char a2)
{
  void *v4; // rdx

  COPMProtectedOutput::~COPMProtectedOutput(this);
  if ( (a2 & 1) != 0 )
    OPM::OPMFreeMemory(this, v4);
  return this;
}
