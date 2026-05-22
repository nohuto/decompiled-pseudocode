/*
 * XREFs of ??_GGameInputModule@@QEAAPEAXI@Z @ 0x18010C214
 * Callers:
 *     ?LoadGameInput@GameInputServerProxy@@AEAAJXZ @ 0x1800713E0 (-LoadGameInput@GameInputServerProxy@@AEAAJXZ.c)
 *     ?UnloadGameInput@GameInputServerProxy@@AEAAXXZ @ 0x1800714E8 (-UnloadGameInput@GameInputServerProxy@@AEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009DC44 (--3@YAXPEAX@Z.c)
 *     ??1GameInputModule@@QEAA@XZ @ 0x18010C090 (--1GameInputModule@@QEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall GameInputModule::`scalar deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this)
{
  GameInputModule::~GameInputModule(this);
  operator delete(this);
  return this;
}
