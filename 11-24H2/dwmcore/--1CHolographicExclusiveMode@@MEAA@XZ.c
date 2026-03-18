/*
 * XREFs of ??1CHolographicExclusiveMode@@MEAA@XZ @ 0x1802D16D4
 * Callers:
 *     ??_ECHolographicExclusiveMode@@MEAAPEAXI@Z @ 0x1802D1720 (--_ECHolographicExclusiveMode@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveExclusiveModeProxy@CHolographicManager@@QEAAXPEAVCHolographicExclusiveMode@@@Z @ 0x1802CFAF4 (-RemoveExclusiveModeProxy@CHolographicManager@@QEAAXPEAVCHolographicExclusiveMode@@@Z.c)
 */

void __fastcall CHolographicExclusiveMode::~CHolographicExclusiveMode(
        CHolographicExclusiveMode *this,
        __int64 a2,
        __int64 a3)
{
  *(_QWORD *)this = &CHolographicExclusiveMode::`vftable'{for `CResource'};
  *((_QWORD *)this + 9) = &CHolographicExclusiveMode::`vftable'{for `IHolographicExclusiveModeManagerProxy'};
  CHolographicManager::RemoveExclusiveModeProxy(*((CHolographicManager **)this + 10), this, a3);
  *((_QWORD *)this + 10) = 0LL;
  CResource::~CResource(this);
}
