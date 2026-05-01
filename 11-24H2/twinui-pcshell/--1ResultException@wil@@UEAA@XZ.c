/*
 * XREFs of ??1ResultException@wil@@UEAA@XZ @ 0x1802DB7FC
 * Callers:
 *     ??_GResultException@wil@@UEAAPEAXI@Z @ 0x1802DBB00 (--_GResultException@wil@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18002694C (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 */

void __fastcall wil::ResultException::~ResultException(volatile signed __int32 **this)
{
  wil::details::shared_buffer::reset(this + 24);
  wil::details::shared_buffer::reset(this + 22);
  *this = (volatile signed __int32 *)&std::exception::`vftable';
  o___std_exception_destroy_0();
}
