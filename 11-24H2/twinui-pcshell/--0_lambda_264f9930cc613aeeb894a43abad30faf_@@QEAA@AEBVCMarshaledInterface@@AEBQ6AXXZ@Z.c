/*
 * XREFs of ??0_lambda_264f9930cc613aeeb894a43abad30faf_@@QEAA@AEBVCMarshaledInterface@@AEBQ6AXXZ@Z @ 0x18045CB50
 * Callers:
 *     ??$RelaunchExperienceWithDelay@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@@@YAXPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@P6AXXZ@Z @ 0x180200D58 (--$RelaunchExperienceWithDelay@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@@@Y.c)
 *     ??$RelaunchExperienceWithDelay@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@@YAXPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@P6AXXZ@Z @ 0x1802BEC60 (--$RelaunchExperienceWithDelay@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@@YAX.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

_lambda_264f9930cc613aeeb894a43abad30faf_ *__fastcall _lambda_264f9930cc613aeeb894a43abad30faf_::_lambda_264f9930cc613aeeb894a43abad30faf_(
        _lambda_264f9930cc613aeeb894a43abad30faf_ *this,
        const struct CMarshaledInterface *a2,
        void (**a3)(void))
{
  *(_QWORD *)this = *(_QWORD *)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this);
  *((_QWORD *)this + 1) = *a3;
  return this;
}
