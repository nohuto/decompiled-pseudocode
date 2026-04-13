/*
 * XREFs of ??1exception@@UEAA@XZ_0 @ 0x18002267C
 * Callers:
 *     ??1bad_alloc@std@@UEAA@XZ @ 0x1800046C4 (--1bad_alloc@std@@UEAA@XZ.c)
 *     ??1bad_function_call@std@@UEAA@XZ @ 0x1800046DC (--1bad_function_call@std@@UEAA@XZ.c)
 *     ??_Ebad_alloc@std@@UEAAPEAXI@Z @ 0x1800046F0 (--_Ebad_alloc@std@@UEAAPEAXI@Z.c)
 *     ??_Glength_error@std@@UEAAPEAXI@Z @ 0x180004730 (--_Glength_error@std@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall exception::~exception(exception *this)
{
  __imp_??1exception@@UEAA@XZ(this);
}
